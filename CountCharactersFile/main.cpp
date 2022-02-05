//Abel Anand
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
        string txt;
        ifstream in;
    
        int spaces = 0;
        int enter = 0;
        int tab = 0;
        int nums = 0;
        int total = 0;
        in.open("/Users/Abel/Desktop/File.txt");
    
    while (getline(in, txt)){
        for (int i = 0; i < txt.length(); i++) {
            total++;
            if (txt[i] == ' ') {
                spaces++;
            }
            else if(txt[i] == '\n'){
                enter++;
            }
            else if(txt[i] == '\t'){
                tab++;
            }
            else if(txt[i] >= 0 || txt[i] <= 9){
                nums++;
            }
        }
    }
    cout << "Spaces: " << spaces << "\nNewlines: " << enter << "\nTabs: " << tab << "\nNumbers: " << nums << "\nTotal Characters: " << total << endl;
}
