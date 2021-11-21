#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int l=0;
string s1, s2, s3, s4, s5;
ifstream inFile;
ofstream outFile;
inFile.open("anagram.txt");
outFile.open("4a.txt");
while (inFile.good() )

{
inFile >> s1 >> s2 >> s3 >> s4 >> s5;
if(s1.size()==s2.size()&&s1.size()==s3.size()&&s1.size()==s4.size()&&s1.size()==s5.size() )
    {
l++;
cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
outFile <<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
}
}
outFile<<l;
cout<<l;
return 0;
}


