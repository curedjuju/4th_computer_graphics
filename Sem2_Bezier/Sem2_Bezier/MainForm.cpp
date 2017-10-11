#include "MainForm.h"
#include <Windows.h>

using namespace Sem2_Bezier;
using namespace System::Collections::Generic;

const int RADIUS = 15;
const float DELTA = 0.02;
System::Void drawBezierCurve(Pen^ pen, Graphics ^g, List<Point>^ points);
int bezierOrder(int pointsCount);
void drawLinear(Pen^ pen, Graphics ^g, List<Point>^ points);
void drawQuadratic(Pen^ pen, Graphics ^g, List<Point>^ points);
void drawQubic(Pen^ pen, Graphics ^g, List<Point>^ points);
void drawHigherOrder(Pen^ pen, Graphics ^g, List<Point>^ points);
Point calculateDeCasteljau(float t, List<Point>^ points);

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}

System::Void MainForm::aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("Program for drawing Bezier curves n-order\n" +  
		"Developer: Yarnykh Roman, SE141 (rvyarnykh@edu.hse.ru), 2017", 
		"Bezier curves, 2017");
}

System::Void MainForm::clearBtn_Click(System::Object^  sender, System::EventArgs^  e)
{
	Graphics ^g = pictureBox->CreateGraphics();
	Color ^col = gcnew Color;
	g->Clear(col->White);
	points->Clear();
}

System::Void MainForm::pictureBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	points->Add(e->Location);
	Graphics ^g = pictureBox->CreateGraphics();
	Color ^col = gcnew Color;
	Brush ^brush = gcnew SolidBrush(col->Red);
	Brush ^curveBrush = gcnew SolidBrush(col->Blue);
	Pen ^pen = gcnew Pen(brush);
	Pen ^curvePen = gcnew Pen(curveBrush);
	g->Clear(col->White);
	Point pPrev = Point(0, 0);
	int i = -1;
	for each (Point p in points)
	{
		g->FillEllipse(brush, p.X - RADIUS / 2, p.Y - RADIUS / 2, RADIUS, RADIUS);
		if (++i == 0){
			pPrev = p;
			continue;
		}
		g->DrawLine(pen, pPrev, p);
		drawBezierCurve(curvePen, g, points);
		pPrev = p;
	}
}

System::Void drawBezierCurve(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	float delta = 0.01;
	//If order belongs range 1..3
	switch (bezierOrder(points->Count))
	{
	case 1:
		drawLinear(pen, g, points);
		break;
	case 2:
		drawQuadratic(pen, g, points);
		break;
	case 3:
		drawQubic(pen, g, points);
		break;
	default:
		drawHigherOrder(pen, g, points);
	}

}

int bezierOrder(int pointsCount)
{
	return pointsCount - 1;
}

void drawLinear(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		curvePoints->Add(Point((1 - t) * points[0].X + t * points[1].X, (1 - t) * points[0].Y + t * points[1].Y));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

void drawQuadratic(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		float x = (1 - t) * (1 - t) * points[2].X + 2 * (1 - t) * t * points[1].X + t * t * points[0].X;
		float y = (1 - t) * (1 - t) * points[2].Y + 2 * (1 - t) * t * points[1].Y + t * t * points[0].Y;
		curvePoints->Add(Point(x, y));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

void drawQubic(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		int x = (1 - t) * (1 - t) * (1 - t) * points[0].X +
			3 * (1 - t) * (1 - t) *  t * points[1].X +
			3 * (1 - t) * t * t * points[2].X +
			t * t * t * points[3].X;
		int y = (1 - t) * (1 - t) * (1 - t) * points[0].Y +
			3 * (1 - t) * (1 - t) *  t * points[1].Y +
			3 * (1 - t) * t * t * points[2].Y +
			t * t * t * points[3].Y;
		curvePoints->Add(Point(x, y));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

void drawHigherOrder(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		curvePoints->Add(calculateDeCasteljau(t, points));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

Point calculateDeCasteljau(float t, List<Point>^ points)
{
	array<array<Point>^> ^b = gcnew array<array<Point>^>(points->Count);
	int n = points->Count;
	for (int i = 0; i < n; i++)
	{
		b[i] = gcnew array<Point>(n);
	}
	for (int i = 0; i < n; i++)
	{
		b[0][i] = points[i];
	}
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < n - j; i++) {
			b[j][i].X = (1 - t) * b[j - 1][i].X + t * b[j - 1][i + 1].X;
			b[j][i].Y = (1 - t) * b[j - 1][i].Y + t * b[j - 1][i + 1].Y;
		}
	}
	return b[n - 1][0];
}

