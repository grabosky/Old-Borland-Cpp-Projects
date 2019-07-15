//----------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "info.h"
//---------------------------------------------------------------------------
#pragma link "ScktComp"
#pragma resource "*.dfm"
TChatForm *ChatForm;
//---------------------------------------------------------------------------
__fastcall TChatForm::TChatForm(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TChatForm::Memo1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
  if (Key == VK_RETURN)
  {
     if (IsServer){ServerSocket->Socket->Connections[0]->SendText(
         Memo1->Lines->Strings[Memo1->Lines->Count - 1]); }
     else
     { ClientSocket->Socket->SendText(Memo1->Lines->Strings[
        Memo1->Lines->Count -1]);}
  }
}

//---------------------------------------------------------------------------
void __fastcall TChatForm::ClientSocketRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  Memo1->Lines->Add(Socket->ReceiveText());
}

//---------------------------------------------------------------------------
void __fastcall TChatForm::ServerSocketClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  Memo1->Lines->Add(Socket->ReceiveText());
}

//---------------------------------------------------------------------------
void __fastcall TChatForm::ServerSocketAccept(TObject *Sender,
      TCustomWinSocket *Socket)
{
  IsServer = true;
   Memo1->Lines->Add("Informacja: Podlaczono do:" + Socket->RemoteAddress);
}

//---------------------------------------------------------------------------
void __fastcall TChatForm::ServerSocketClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  Memo1->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TChatForm::ClientSocketError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  Memo1->Lines->Add("Informacja: Blad w laczeniu z :" + Server);
  ErrorCode = 0;
}
//---------------------------------------------------------------------------



void __fastcall TChatForm::Zamknij1Click(TObject *Sender)
{
  ServerSocket->Close();
  ClientSocket->Close();
  Close();
}
//---------------------------------------------------------------------------

void __fastcall TChatForm::FileListenItemClick(TObject *Sender)
{
 if (ClientSocket->Active)
  {
    ClientSocket->Active = false;
  }
  if (InputQuery("Numer IP", "Numer IP:", Server))
  {
     if (Server.Length() > 0)
     {
        ClientSocket->Host = Server;
        ClientSocket->Active = true;
        FileListenItem->Checked = false;
     }
  }        
}
//---------------------------------------------------------------------------



void __fastcall TChatForm::ClientSocketDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
 Memo1->Lines->Add("Informacja: osoba z ktora rozmawiales/as wyszla z czatu...");

}
//---------------------------------------------------------------------------

void __fastcall TChatForm::ClientSocketConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
 Memo1->Lines->Add("Informacja: Podlaczono do:" + Server);
}
//---------------------------------------------------------------------------

void __fastcall TChatForm::ServerSocketClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  Memo1->Lines->Add("Informacja: osoba z ktora rozmawiales/as wyszla z czatu...");
}
//---------------------------------------------------------------------------

void __fastcall TChatForm::Help1Click(TObject *Sender)
{
 Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TChatForm::FormCreate(TObject *Sender)
{
    ChatForm->Left = (Screen->Width / 2) - (ChatForm->Width / 2);
   ChatForm->Top = (Screen->Height / 2) - (ChatForm->Height / 2);         
}
//---------------------------------------------------------------------------


