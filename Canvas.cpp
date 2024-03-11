#include "Canvas.h"
#include <iostream>
using namespace std;
Canvas::Canvas(int _width, int _height)
{
	width = _width;
	height = _height;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{

}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{

}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	int i, j;
	for (i = left; i <= right; i++)
		matrix[i][top] = ch, matrix[i][bottom] = ch;
	for (i = bottom; i <= top; i++)
		matrix[left][i] = ch, matrix[right][i] = ch;
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	int i, j;
	for (i = left + 1; i < right; i++)
		for (j = bottom + 1; j < top; j++)
			matrix[i][j] = ch;
}
void Canvas::SetPoint(int x, int y, char ch)
{
	matrix[x][y] = ch;
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{

}
void Canvas::Print()
{
	int i, j;
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			cout << matrix[i][j]<<" ";
		}
		cout << '\n';
	}
}
void Canvas::Clear()
{
	int i, j;
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matrix[i][j]=' ';
		}
		cout << '\n';
	}
}