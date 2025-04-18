#include "logic.h"

//int sum_elements_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
//	if (size <= 0 || !matrix) {
//		return 0;
//	}
//
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (j < i) {
//				sum += matrix[i][j];
//			}
//		}
//	}
//
//	return sum;
//}

//int sum_elements_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
//	if (size <= 0 || !matrix) {
//		return 0;
//	}
//
//	int sum = 0;
//
//	for (int i = 0; i < size; i++){
//		for (int j = 1; j < size; j++){
//			if (j < i) {
//				sum += matrix[i][j];
//			}
//		}
//	}
//
//	return sum;
//}

int sum_elements_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
	if (size <= 0 || !matrix) {
		return 0;
	}

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < size; j++) 
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}

int sum_elements_up_additional_diagonale(int matrix[SIZE][SIZE], int size) {
	if (size <= 0 || !matrix) {
		return 0;
	}

	int sum = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 1; j < size - 1 - i; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}

int sum_elements_down_additional_diagonale(int matrix[SIZE][SIZE], int size) {
	if (size <= 0 || !matrix) {
		return 0;
	}

	int sum = 0;

	for (int i = 1; i < size ; i++)
	{
		for (int j = size - 1; j > size - i ; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}