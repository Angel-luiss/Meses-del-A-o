//
//  main.cpp
//  meses del año
//
//  Created by Angel Tucubal on 14/06/22.
//

#include <iostream>
using namespace std;
int main(){
    int numero, enero, febrero,marzo,abril,mayo,junio;
    cout<<"Digite un numero entre [ 1-12 ]:"; cin>>numero;
    enero=numero; febrero=numero; marzo=numero; abril=numero; mayo=numero; junio=numero;
    
    switch (enero){
        case 1: cout<<"mes de enero:"<<endl;
            break;
    }
    switch (febrero) {
      case 2: cout<<"mes de febrero:"<<endl;
        break;
    }
    switch (marzo) {
      case 3: cout<<"mes de marzo:"<<endl;
        break;
    }
    switch (abril) {
      case 4: cout<<"mes de abril:"<<endl;
        break;
    }
    switch (mayo) {
      case 5: cout<<"mes de mayo:"<<endl;
        break;
    }
    switch (junio) {
      case 6: cout<<"mes de junio:"<<endl;
        break;
    }
    return 0;
}
