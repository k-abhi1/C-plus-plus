//studendata _records

// #include<iostream>
// using namespace std;
// string arr1[20],arr2[20],arr3[20],arr4[20],arr[20];
// int total=0;

// void enter()
// {
// int choice;
// cout<<"how many student do  you want to enter"<<endl;
// cin>>choice;
// if(total==0)
// {
// total=total+choice;
// for(int i=0;i<choice;i++)
// {
//     cout<<"\nenter data of student "<<i+1<<endl<<endl;
//     cout<<"enter the name of student"<<endl;
//     cin>>arr1[i];
//     cout<<"enter the roll no of student"<<endl;
//     cin>>arr2[i];
//     cout<<"enter the class of student"<<endl;
//     cin>>arr3[i];
//     cout<<"enter the section of student"<<endl;
//     cin>>arr4[i];
//     total++;


// }
// }
// else
// {
//     for(int i=total;i<total+choice;i++)
//     {
//         cout<<"\nenter data of student "<<i+1<<endl<<endl;
//     cout<<"enter the name of student"<<endl;
//     cin>>arr1[i];
//     cout<<"enter the roll no of student"<<endl;
//     cin>>arr2[i];
//     cout<<"enter the class of student"<<endl;
//     cin>>arr3[i];
//     cout<<"enter the section of student"<<endl;
//     cin>>arr4[i];
//     total++;
//     }
//     total=total+choice;
// }
// }
// void view()
// {
//     if(total==0)
//     {
//         cout<<"no data found"<<endl;

//     }
//     else
//     {
//     for(int i=0;i<total;i++)
//     {
//         cout<<"data of student "<<i+1<<endl<<endl;
//         cout<<"name of student is"<<arr1[i]<<endl;
//         cout<<"roll no of student is"<<arr2[i]<<endl;
//         cout<<"class of student is"<<arr3[i]<<endl;
//         cout<<"section of student is"<<arr4[i]<<endl;
//     }

// }
// }
// void search()
// {
//     if(total==0)
//     {
//         cout<<"no data found"<<endl;

//     }
//     else
//     {
// string rollno;
// cout<<"enter the roll no of student"<<endl;
// cin>>roll no;

// for(int i=0;i<total;i++)
// {
//     if(arr2[i]==roll no)
//     {
//         cout<<"data of student "<<i+1<<endl<<endl;
//         cout<<"name of student is"<<arr1[i]<<endl;
//         cout<<"roll no of student is"<<arr2[i]<<endl;
//         cout<<"class of student is"<<arr3[i]<<endl;
//         cout<<"section of student is"<<arr4[i]<<endl;
//     }
//     else
//     {
//         cout<<"data not found"<<endl;
//     }



// }
// }
// }

// void updata()
// {
//     if(total==0)
//     {
//         cout<<"no data found"<<endl;

//     }
//     else
//     {
// string rollno;
// cout<<"enter the roll no of student"<<endl;
// cin>>roll no;

// for(int i=0;i<total;i++)
// {
//     if(arr2[i]==roll no)
//     {
//         cout<<"pervios data"<<endl<<endl;
//         cout<<"data of student "<<i+1<<endl<<endl;
//         cout<<"name of student is"<<arr1[i]<<endl;
//         cout<<"roll no of student is"<<arr2[i]<<endl;
//         cout<<"class of student is"<<arr3[i]<<endl;
//         cout<<"section of student is"<<arr4[i]<<endl;
//         cout<<"enter the new data"<<endl;
//         cout<<"enter the name of student"<<endl;
//         cin>>arr1[i];
//         cout<<"enter the roll no of student"<<endl;
//         cin>>arr2[i];
//         cout<<"enter the class of student"<<endl;
//         cin>>arr3[i];
//         cout<<"enter the section of student"<<endl;
//         cin>>arr4[i];
//     }
//     else
//     {
//         cout<<"data not found"<<endl;
//     }
// }
// }
// }
// void delete()
// {
//     if(total==0)
//     {
//         cout<<"no data found"<<endl;

//     }
//     else
//     {
// int a;
// cout<<"press 1 delet full record "<<endl;
// cout<<"press 2 delet spaceficdata record"<<endl;
// cin>>a;
// if(a==1)
// {
//     total=0;
//     cout<<"all record is a delet";   

// }
// else(a==2)
// {
// string rollno;
// cout<<"enter roll no which you whant delete "<<endl;
// cin>>rollno;
// for(int i=0;i<total;i++)
// {
//     if(arr2[i]==rollno)
//     {
//         for(int j=i;j<total;j++)
//         {
//             arr1[j]=arr1[j+1];
//             arr2[j]=arr2[j+1];
//             arr3[j]=arr3[j+1];
//             arr4[j]=arr4[j+1];
//         }
//         total--;
//         cout<<"you requrid record is delete !!!"<<endl;

//     }
//     else
//     {
//         cout<<"data not found"<<endl;
//     }
// }
// }
// }
// }
// void exit()
// {
//     cout<<"thank you for using this program"<<endl;
//     cout<<"press any key to exit"<<endl;
//     exit(0);
// }
// int main()
// {
//     int value;
//     while(true)
//     {
//     cout<<"press 1 to enter to data "<<endl;
//     cout<<"press 2 to view data "<<endl;
//     cout<<"press 3 to search data "<<endl;
//     cout<<"press 4 updata the data"<<endl;
//     cout<<"press 5 to delete data "<<endl;
//     cout<<"press 6 to exit "<<endl;

//     switch(value)
//     {
//        case 1;
//        enter();
//        break;

//        case 2;
//          view();
//             break;

//             case 3;
//             search();
//             break;

//             case 4;
//             updata();
//             break;

//             case 5;
//             delete();
//             break;

//             case 6;
//             exit();
//             break;

//             default;
//             cout<<"invalid input"<<endl;
//             break;




//     }


//     }
// }








#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20];
int total = 0;

void enter() {
    int choice;
    cout << "how many students do you want to enter" << endl;
    cin >> choice;
    if (total == 0) {
        total = choice;
        for (int i = 0; i < choice; i++) {
            cout << "\nenter data of student " << i + 1 << endl << endl;
            cout << "enter the name of student" << endl;
            cin >> arr1[i];
            cout << "enter the roll no of student" << endl;
            cin >> arr2[i];
            cout << "enter the class of student" << endl;
            cin >> arr3[i];
            cout << "enter the section of student" << endl;
            cin >> arr4[i];
        }
    } else {
        for (int i = total; i < total + choice; i++) {
            cout << "\nenter data of student " << i + 1 << endl << endl;
            cout << "enter the name of student" << endl;
            cin >> arr1[i];
            cout << "enter the roll no of student" << endl;
            cin >> arr2[i];
            cout << "enter the class of student" << endl;
            cin >> arr3[i];
            cout << "enter the section of student" << endl;
            cin >> arr4[i];
        }
        total = total + choice;
    }
}

void view() {
    if (total == 0) {
        cout << "no data found" << endl;
    } else {
        for (int i = 0; i < total; i++) {
            cout << "data of student " << i + 1 << endl << endl;
            cout << "name of student is " << arr1[i] << endl;
            cout << "roll no of student is " << arr2[i] << endl;
            cout << "class of student is " << arr3[i] << endl;
            cout << "section of student is " << arr4[i] << endl;
        }
    }
}

void search() {
    if (total == 0) {
        cout << "no data found" << endl;
    } else {
        string rollno;
        cout << "enter the roll no of student" << endl;
        cin >> rollno;
        int found = 0;

        for (int i = 0; i < total; i++) {
            if (arr2[i] == rollno) {
                found = 1;
                cout << "data of student " << i + 1 << endl << endl;
                cout << "name of student is " << arr1[i] << endl;
                cout << "roll no of student is " << arr2[i] << endl;
                cout << "class of student is " << arr3[i] << endl;
                cout << "section of student is " << arr4[i] << endl;
                break;
            }
        }

        if (!found) {
            cout << "Data not found" << endl;
        }
    }
}

void update() {
    if (total == 0) {
        cout << "no data found" << endl;
    } else {
        string rollno;
        cout << "enter the roll no of student" << endl;
        cin >> rollno;
        int found = 0;

        for (int i = 0; i < total; i++) {
            if (arr2[i] == rollno) {
                found = 1;
                cout << "previous data" << endl << endl;
                cout << "data of student " << i + 1 << endl << endl;
                cout << "name of student is " << arr1[i] << endl;
                cout << "roll no of student is " << arr2[i] << endl;
                cout << "class of student is " << arr3[i] << endl;
                cout << "section of student is " << arr4[i] << endl;
                cout << "enter the new data" << endl;
                cout << "enter the name of student" << endl;
                cin >> arr1[i];
                cout << "enter the roll no of student" << endl;
                cin >> arr2[i];
                cout << "enter the class of student" << endl;
                cin >> arr3[i];
                cout << "enter the section of student" << endl;
                cin >> arr4[i];
                break;
            }
        }

        if (!found) {
            cout << "Data not found" << endl;
        }
    }
}

void deleteData() {
    if (total == 0) {
        cout << "no data found" << endl;
    } else {
        int a;
        cout << "press 1 to delete full record" << endl;
        cout << "press 2 to delete specific data record" << endl;
        cin >> a;

        if (a == 1) {
            total = 0;
            cout << "all records are deleted";
        } else if (a == 2) {
            string rollno;
            cout << "enter roll no which you want to delete" << endl;
            cin >> rollno;

            int found = 0;

            for (int i = 0; i < total; i++) {
                if (arr2[i] == rollno) {
                    found = 1;
                    for (int j = i; j < total - 1; j++) {
                        arr1[j] = arr1[j + 1];
                        arr2[j] = arr2[j + 1];
                        arr3[j] = arr3[j + 1];
                        arr4[j] = arr4[j + 1];
                    }
                    total--;
                    cout << "the required record is deleted!!!" << endl;
                    break;
                }
            }

            if (!found) {
                cout << "Data not found" << endl;
            }
        }
    }
}

void exitProgram() {
    cout << "Thank you for using this program" << endl;
    cout << "Press any key to exit" << endl;
    exit(0);
}

int main() {
    int choice;
    while (true) {
        cout << "Press 1 to enter data" << endl;
        cout << "Press 2 to view data" << endl;
        cout << "Press 3 to search data" << endl;
        cout << "Press 4 to update the data" << endl;
        cout << "Press 5 to delete data" << endl;
        cout << "Press 6 to exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                enter();
                break;
            case 2:
                view();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleteData();
                break;
            case 6:
                exitProgram();
                break;
            default:
                cout << "Invalid input" << endl;
               
        }
    }
}

