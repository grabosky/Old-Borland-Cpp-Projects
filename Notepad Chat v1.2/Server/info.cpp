//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "info.h"
#include "main.h"
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
ShellExecute(Handle,"open","mailto:",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
    Form1->Left = (Screen->Width / 2) - (Form1->Width / 2);
   Form1->Top = (Screen->Height / 2) - (Form1->Height / 2);
}
//---------------------------------------------------------------------------

