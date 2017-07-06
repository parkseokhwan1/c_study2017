#include "stdafx.h"
#include "../../engine/utils.h"

void procTest3(HWND hWnd)
{
	/*int nums[2][6] = { 
		1,2,3,4,5,6,
		7,8,9,10,11,12 };
*/
	/*int nums_1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12 };

	int nums_2[2][6] = {1,2,3,4,5,6,7,8,9,10,11,12 };

	int nums_3[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	
	win32_Printf(hWnd, L"[0][0] : %d %d", nums_1[0][0], nums_2[0][0]);

	int col = 1;
	int row = 0;

	win32_Printf(hWnd, L"[1][0] : %d %d", nums_1[row][col], nums_2[row][col]);

	win32_Printf(hWnd, L"[0][0] : %d %d", nums_3[4*row + col], nums_3[6*row + col]);*/

	
	int nData[5][6] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			nData[4][i] += nData[j][i];
		}
	}

	win32_Printf(hWnd, L"%d %d %d %d %d", nData[4][0],
		nData[4][1],
		nData[4][2],
		nData[4][3],
		nData[4][4]
	);



}