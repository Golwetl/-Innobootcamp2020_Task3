#include <iostream>
using namespace std; 
int main() {
	float x[4],y[4],x5,y5;
	int pos[4];

	for (int i=0;i<4;i++){
		cin >> x[i] >> y[i];
  }
	  cin >> x5 >> y5;
	for (int i=0;i<4;i++){
		if (x[i]-x[(i+1)%4] == 0){ 
			if (x5 < x[i]) pos[i] = 1;
			if (x5 ==  x[i]) pos[i] = 2;
			if (x5 > x[i]) pos[i] = 3;
		}else{
			float Y = y[i]+(x5-x[i])*(y[i]-y[(i+1)%4])/(x[i]-x[(i+1)%4]); 

			if (y5 > Y) pos[i] = 1;
			if (y5 == Y) pos[i] = 2;
			if (y5 < Y) pos[i] = 3;
		}
		
	}
	cout<< endl;
	for (int i=0;i<4;i++){
		if ((pos[i]!=3)&&(pos[(i+1)%4]!=3)&&(pos[(i+2)%4]!=1)&&(pos[(i+3)%4]!=1)){
			cout << "Yes";
			return 0; 
		}
	}
	cout << "No";
}