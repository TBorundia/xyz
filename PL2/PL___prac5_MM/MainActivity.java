package com.example.practical5;
import androidx.appcompat.app.AppCompatActivity;
import android.app.DatePickerDialog;
import android.content.Intent;
import android.os.Bundle;
import android.util.SparseBooleanArray;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.BaseAdapter;
import android.widget.Button;
import android.widget.CalendarView;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import java.util.ArrayList;
import java.util.Calendar;
public class MainActivity extends AppCompatActivity {
    String[] tech = new String[] {"MERN", "Laravel", "Angular", "Android", "Next JS"};
            ListView techStackList;
    Spinner branch;
    Button dPickerBtn, submitBtn;
    CheckBox terms, dream, superDream, regular;
    EditText age, name, email, cgpa;
    RadioGroup gender;
    ArrayList<String> techStack;
    ArrayList<String> jobType;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        techStack = new ArrayList<>();
        jobType = new ArrayList<>();
        name = findViewById(R.id.name);
        email = findViewById(R.id.email);
        cgpa = findViewById(R.id.cgpa);
        gender = findViewById(R.id.gender_group);
        dream = findViewById(R.id.dream_job);
        superDream = findViewById(R.id.super_dream_job);
        regular = findViewById(R.id.regular_job);
        techStackList = (ListView) findViewById(R.id.tech_stack);
        TechStackAdapter adapter = new TechStackAdapter();
        techStackList.setAdapter(new ArrayAdapter<String>(this,
                android.R.layout.simple_list_item_checked, tech));
        branch = findViewById(R.id.branch);
        ArrayAdapter<CharSequence> adapter1 =
                ArrayAdapter.createFromResource(this, R.array.branch_array,
                        android.R.layout.simple_spinner_item);
        adapter1.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item)
        ;
        branch.setAdapter(adapter1);
        age = (EditText) findViewById(R.id.age);
        dPickerBtn = (Button) findViewById(R.id.dbPicker);
        dPickerBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Calendar calendar = Calendar.getInstance();
                int year = calendar.get(Calendar.YEAR);
                int month = calendar.get(Calendar.MONTH);
                int day = calendar.get(Calendar.DAY_OF_MONTH);
                new DatePickerDialog(MainActivity.this, new
                        DatePickerDialog.OnDateSetListener() {
                            @Override
                            public void onDateSet(DatePicker datePicker, int y, int m,
                                                  int d) {
                                int currAge = month >= m ? year-y : year-y-1;
                                age.setText(Integer.toString(currAge));
                            }
                        }, year, month, day).show();
            }
        });
        dream.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
                                                     @Override
                                                     public void onCheckedChanged(CompoundButton buttonView, boolean
                                                             isChecked) {
                                                         if(isChecked &&
                                                                 !jobType.contains(buttonView.getText().toString())) {
                                                             jobType.add(buttonView.getText().toString());
                                                         }
                                                         else {
                                                             jobType.remove(buttonView.getText().toString());
                                                         }
                                                     }
                                                 });
        superDream.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
                                                          @Override
                                                          public void onCheckedChanged(CompoundButton buttonView, boolean
                                                                  isChecked) {
                                                              if(isChecked &&
                                                                      !jobType.contains(buttonView.getText().toString())) {
                                                                  jobType.add(buttonView.getText().toString());
                                                              }
                                                              else {
                                                                  jobType.remove(buttonView.getText().toString());
                                                              }
                                                          }
                                                      });
        regular.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
                                                       @Override
                                                       public void onCheckedChanged(CompoundButton buttonView, boolean
                                                               isChecked) {
                                                           if(isChecked &&
                                                                   !jobType.contains(buttonView.getText().toString())) {
                                                               jobType.add(buttonView.getText().toString());
                                                           }
                                                           else {
                                                               jobType.remove(buttonView.getText().toString());
                                                           }
                                                       }
                                                   });
        techStackList.setOnItemClickListener(new AdapterView.OnItemClickListener() {
                                                         @Override
                                                         public void onItemClick(AdapterView<?> parent, View view, int
                                                                 position, long id) {
                                                             techStack.clear();
                                                             SparseBooleanArray array =
                                                                     techStackList.getCheckedItemPositions();
                                                             for(int i=0; i<array.size(); i++) {
                                                                 if(array.get(i)) {
                                                                     techStack.add(tech[i]);
                                                                 }
                                                             }
                                                         }
                                                     });
        submitBtn = (Button) findViewById(R.id.submit_btn);
        terms = findViewById(R.id.terms_checkbox);
        terms.setOnCheckedChangeListener(new
                                                 CompoundButton.OnCheckedChangeListener() {
                                                     @Override
                                                     public void onCheckedChanged(CompoundButton compoundButton, boolean
                                                             b) {
                                                         submitBtn.setEnabled(b);
                                                     }
                                                 });
        submitBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Bundle bundle = new Bundle();
                RadioButton btn = (RadioButton)
                        findViewById(gender.getCheckedRadioButtonId());
                bundle.putString("name", name.getText().toString());
                bundle.putString("email", email.getText().toString());
                bundle.putString("gender", btn.getText().toString());
                bundle.putString("cgpa", cgpa.getText().toString());
                bundle.putString("branch", (String) branch.getSelectedItem());
                bundle.putString("age", age.getText().toString());
                bundle.putStringArrayList("tech_stack", techStack);
                bundle.putStringArrayList("job_type", jobType);
                Intent intent = new Intent(MainActivity.this,
                        DisplayActivity.class);
                intent.putExtras(bundle);
                startActivity(intent);
            }
        });
    }
    private class TechStackAdapter extends BaseAdapter {
        @Override
        public int getCount() {
            return tech.length;
        }
        @Override
        public String getItem(int i) {
            return null;
        }
        @Override
        public long getItemId(int i) {
            return 0;
        }
        @Override
        public View getView(int i, View view, ViewGroup viewGroup) {
            if(view == null) {
                view =
                        getLayoutInflater().inflate(R.layout.tech_stack_list_item, viewGroup, false);
            }
            CheckBox box = (CheckBox) view.findViewById(R.id.hobby_box);
            box.setText(tech[i]);
            return view;
        }
    }
}