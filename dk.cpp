#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int cases, candles;
	double bpx, bpy, cpx, cpy;
	string message[2] = {"light a candle","curse the darkness"};

	string result = "";

	cin >> cases;

	while(cases){

		cin >> bpx >> bpy;
		cin >> candles;

		for (int i = 0; i < candles; i++)
		{
			float distance;
			cin >> cpx >> cpy;


			if (candles == 1)
			{
				distance = sqrt(pow((cpx-bpx),2)+pow((cpy-bpy),2));

				if (distance <= 8)
				{
					result += message[0]+"\n";
					// break;
				}else{
					result += message[1]+"\n";
					// break;
				}
				/* code */
			}else if(candles == 2){
//				distance = sqrt(pow((cpx-bpx),2)+pow((cpy-bpy),2));
//
				result += message[1]+"\n";
			}
		}
		cases--;
	}

	cout << result;
	return 0;
}
