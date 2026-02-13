#include<iostream>
using namespace std;

class File {
    string name;
    int size;

    public:
       File(){
        name = "";
        size = 0;
       }

       void createFile(string n, int s){
        name = n;
        size = s;
       }

       void showFile(){
        if (name != "")
            cout << "File: " << name << " | Size: " << size << " KB"<<endl;
       }

       string getName(){
        return name;
       }

       void deletFile(){
        name = "";
        size = 0;
       }
};

int main(){
    File files[10]; // 10 files max
    int choice;
    int index = 0;

    while(true){

        cout<< "\n1. Create File\n";
        cout<< "2. Show File\n";
        cout<< "3. Delet File\n";
        cout<< "4. Exit File\n";
        cout<< "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            int size;

            cout << "Enter File name: ";
            cin >> name;

            cout << "Enter file size: ";
            cin >> size;

            files[index].createFile(name, size);
            index++;
        }

        else if (choice == 2 )
        {
            for (int i = 0; i < index; i++)
            {
                files[i].showFile();
            }
            
        }
        
        else if (choice == 3)
        {
            string name;
            cout << "Enter file name to delet: ";
            cin >> name;

            for (int i = 0; i < index; i++)
            {
                for (int i = 0; i < index; i++)
                {
                   if (files[i].getName() == name)
                   {
                     files[i].deletFile();
                   }
                    
                }
                
            }

            
            
        }
            else if (choice == 4)
            {
                break;
            }
        
        
    }
    return 0;
}