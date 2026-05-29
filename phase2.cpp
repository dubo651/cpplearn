int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    if (score >= 90)       cout << "Grade: A" << endl;
    else if (score >= 80)  cout << "Grade: B" << endl;
    else if (score >= 60)  cout << "Grade: C" << endl;
    else                   cout << "Grade: F" << endl;

    string result = (score >= 60) ? "PASS" : "FAIL";
    cout << "Result: " << result << endl;

    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
        case 1: cout << "Monday"    << endl; break;
        case 2: cout << "Tuesday"   << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday"  << endl; break;
        case 5: cout << "Friday"    << endl; break;
        case 6: case 7:
            cout << "Weekend!" << endl; break;
        default: cout << "Invalid day" << endl;
    }

    return 0;
}
