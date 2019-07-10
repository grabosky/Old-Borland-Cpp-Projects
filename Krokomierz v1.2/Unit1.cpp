//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Label4->Caption = "";
 Label6->Caption = "";

double m = 0, km = 0, kcal = 0;

ProgressBar1->Position = 0;


m = Edit1->Text.ToDouble();
km = ((m*88)/100000);
kcal = ((m*88)/100000)*21;

km *= 100;
km = ceil(km);
km /= 100;

kcal *= 100;
kcal = ceil(kcal);
kcal /= 100;


Label4->Caption = km;
Label6->Caption = kcal;

ProgressBar1->Position = m;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
  Form1->Left = (Screen->Width / 2) - (Form1->Width / 2);
   Form1->Top = (Screen->Height / 2) - (Form1->Height / 2);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
Label4->Caption = "";
 Label6->Caption = "";


double m = 0, km = 0, kcal = 0;

ProgressBar1->Position = 0;


m = Edit1->Text.ToDouble();
km = ((m*88)/100000);
kcal = ((m*88)/100000)*21;

km *= 100;
km = ceil(km);
km /= 100;

kcal *= 100;
kcal = ceil(kcal);
kcal /= 100;


Label4->Caption = km;
Label6->Caption = kcal;

ProgressBar1->Position = m;
        
}
//---------------------------------------------------------------------------

