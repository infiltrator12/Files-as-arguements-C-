#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char*argv[]){
    int lineCount = 0; //declare lineCunt variable and set to 0

    ifstream file(argv[1]); // open file using arguement passed
    string line;
    while(!file.eof()){ // loop until end of file
        
        getline(file, line);
        cout<<line<<endl;
        lineCount++; //increment lineCount each iteration
    }

    cout<<lineCount<<endl; //print lineCount

    return 0;
}