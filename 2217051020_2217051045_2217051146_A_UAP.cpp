#include <iostream>
using namespace std;

char kotak[9] = {'1','2','3','4','5','6','7','8','9'};

void papan(){
    system("cls");
    cout<<"\n\n\t Tic Tac Toe \n\n";
    cout<<"Pemain 1 (X)  -  Pemain 2 (O)"<<endl<<endl;
    cout<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<kotak[0]<<"  |  "<<kotak[1]<<"  |  "<<kotak[2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<kotak[3]<<"  |  "<<kotak[4]<<"  |  "<<kotak[5]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<kotak[6]<<"  |  "<<kotak[7]<<"  |  "<<kotak[8]<<endl;
    cout<<"     |     |     "<<endl<<endl;
}

int menang(){
    if(kotak[0] == kotak[1] && kotak[1] == kotak[2])
        return 1;
    else if(kotak[3] == kotak[4] && kotak[4] == kotak[5])
        return 1;
    else if(kotak[6] == kotak[7] && kotak[7] == kotak[8])
        return 1;
    else if(kotak[0] == kotak[3] && kotak[3] == kotak[6])
        return 1;
    else if(kotak[1] == kotak[4] && kotak[4] == kotak[7])
        return 1;
    else if(kotak[2] == kotak[5] && kotak[5] == kotak[8])
        return 1;
    else if(kotak[0] == kotak[4] && kotak[4] == kotak[8])
        return 1;
    else if(kotak[2] == kotak[4] && kotak[4] == kotak[6])
        return 1;
    else if(kotak[0] != '1'&& kotak[1] != '2'&& kotak[2] != '3' 
            && kotak[3] != '4'&& kotak[4] != '5'&& kotak[5] != '6' 
            && kotak[6] != '7'&& kotak[7] != '8'&& kotak[8] != '9')
        return 0;
    else return -1;
}


int main(){
	int pemain = 1 , i, pilihan;
    char tanda;
    
    do{
        papan();
        pemain = (pemain%2)?1:2;
        cout <<" Pemain "<<pemain<<", Masukkan Pilihan Angka :  ";
        cin>>pilihan;
        tanda = (pemain==1)?'X':'O';
        
        if(pilihan == 1 && kotak[0] == '1')
            kotak[0] = tanda;
        else if(pilihan == 2 && kotak[1] == '2')
            kotak[1] = tanda;
        else if(pilihan == 3 && kotak[2] == '3')
            kotak[2] = tanda;
        else if(pilihan == 4 && kotak[3] == '4')
            kotak[3] = tanda;
        else if(pilihan == 5 && kotak[4] == '5')
            kotak[4] = tanda;
        else if(pilihan == 6 && kotak[5] == '6')
            kotak[5] = tanda;
        else if(pilihan == 7 && kotak[6] == '7')
            kotak[6] = tanda;
        else if(pilihan == 8 && kotak[7] == '8')
            kotak[7] = tanda;
        else if(pilihan == 9 && kotak[8] == '9')
            kotak[8] = tanda;
        else{
            cout<<" Invalid Move "<<endl<<endl;
            pemain--;
            system("pause");
        }
        i = menang();
        pemain++;
    }while(i==-1);
    papan();
    if(i==1){
        cout<<" \tPemain " <<--pemain<<" Menang "<<endl<<endl;
    }
    else{
        cout<<" \tGame Seri "<<endl<<endl;
    }
}



