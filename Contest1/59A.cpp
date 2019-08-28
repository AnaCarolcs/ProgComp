#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main (){

   string word, palavraMai, palavraMin;
   int letraMin = 0, letraMai = 0;

   cin >> word;

   for(int i = 0; word.size() >= i; i++){
       if(word[i] >= 'a'){
           letraMin++;
       } else if(word[i] < 'a' && word[i] >= 'A') {
           letraMai++;
       }
   }

   //cout<<letraMai<<endl;
   //cout<<letraMin<<endl;

   if(letraMin >= letraMai){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout<<word<<endl;
   }else{
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout<<word<<endl;
   }

   return 0;
}