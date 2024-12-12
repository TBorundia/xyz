package com.example.practical5;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;
import java.util.ArrayList;
public class DisplayActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display);
        Bundle bundle = getIntent().getExtras();
        assert bundle != null;
        TextView name = (TextView) findViewById(R.id.display_name);
        name.setText(bundle.getString("name"));
        TextView email = (TextView) findViewById(R.id.display_email);
        email.setText(bundle.getString("email"));
        TextView gender = (TextView) findViewById(R.id.display_gender);
        gender.setText(bundle.getString("gender"));
        TextView cgpa = (TextView) findViewById(R.id.display_cgpa);
        cgpa.setText(bundle.getString("cgpa"));
        TextView branch = (TextView) findViewById(R.id.display_branch);
        branch.setText(bundle.getString("branch"));
        TextView age = (TextView) findViewById(R.id.display_age);
        age.setText(bundle.getString("age"));
        ArrayList<String> techList = bundle.getStringArrayList("tech_stack");
        String commaseparatedlist = techList.toString();
        commaseparatedlist
                = commaseparatedlist.replace("[", "")
                .replace("]", "")
                .replace(" ", "");
        TextView techStack = (TextView) findViewById(R.id.display_tech_stack);
        techStack.setText(commaseparatedlist);
        ArrayList<String> jobList = bundle.getStringArrayList("job_type");
        String jobString = jobList.toString();
        jobString
                = jobString.replace("[", "")
                .replace("]", "")
                .replace(" ", "");
        TextView jobType = (TextView) findViewById(R.id.display_job_types);
        jobType.setText(jobString);
    }
}