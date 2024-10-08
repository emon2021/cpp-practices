#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, i ,j;
    cin >> n;
    cin >> i;

   
        if(n >= 1 && n <= 9 && i > 9)
        {
            for ( j = n; j < 10; j++)
            {
              if(j == 1){
                cout << "one" << endl;
              }else if(j == 2){
                cout << "two" << endl;
              }else if(j == 3){
                cout << "three" << endl;
              }else if(j == 4){
                cout << "four" << endl;
              }else if(j == 5){
                cout << "five" << endl;
              }else if(j == 6){
                cout << "six" << endl;
              }else if(j == 7){
                cout << "seven" << endl;
              }else if(j == 8){
                cout << "eight" << endl;
              }else if(j == 9){
                cout << "nine" << endl;
              }

                

            }

            for(int i = n; i < 10; i++)
            {
                if(i > 9 ){
                    if(i % 2 == 0){
                        cout << "even" << endl;
                    }else{
                        cout << "odd" << endl;
                    }
                }
            }
            
        }
        
    
}