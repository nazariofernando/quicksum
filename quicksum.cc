#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    // your code goes here
    
    char c;
    char arr[255];
    int n = 0;
    
    while(c != '#'){
        scanf("%c", &c);
        arr[n] = c;
        n++;
    };
    
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == ' '){
            sum += i * 0;
        }
        else if(arr[i] == '\n'){
            sum += i * 0;
        }
        else if(arr[i] == '#'){
            sum += i * 0;
        }
        else{
            sum += (i+1)*((int)arr[i]-64);
        };
    };
    
    printf("%d", sum);
    
    return 0;
}
