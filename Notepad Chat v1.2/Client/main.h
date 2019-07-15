//----------------------------------------------------------------------------
//Borland C++Builder
//Copyright (c) 1987, 1997-2002 Borland International Inc. All Rights Reserved.
//----------------------------------------------------------------------------
//---------------------------------------------------------------------------
#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ScktComp.hpp"
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TChatForm : public TForm
{
__published:	// IDE-managed Components
        TBevel *Bevel1;
        TMemo *Memo1;
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *FileListenItem;
        TMenuItem *FileConnectItem;
        TMenuItem *Disconnect1;
        TMenuItem *N1;
        TMenuItem *Exit1;
        TServerSocket *ServerSocket;
        TClientSocket *ClientSocket;
        TMenuItem *Zapisz1;
        TMenuItem *Drukuj1;
        TMenuItem *N2;
        TMenuItem *Zamknij1;
        TMenuItem *Edit1;
        TMenuItem *Format1;
        TMenuItem *Widok1;
        TMenuItem *Help1;
        TMenuItem *CofnijCrtlZ1;
        TMenuItem *N3;
        TMenuItem *WytnijCrtlX1;
        TMenuItem *KopiujCrtlC1;
        TMenuItem *WklejCrtlV1;
        TMenuItem *DeleteDel1;
        TMenuItem *N4;
        TMenuItem *ZnajdzCrtlF1;
        TMenuItem *ZnajdznastepneF31;
        TMenuItem *ZamienCrtlH1;
        TMenuItem *IdzdoCrtlG1;
        TMenuItem *N5;
        TMenuItem *ZaznaczwszystkoCrtlA1;
        TMenuItem *CzasDataF51;
        TMenuItem *Czcionka1;
        TMenuItem *StatusBar1;
   void __fastcall Memo1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift);
   void __fastcall ClientSocketRead(TObject *Sender,
      TCustomWinSocket *Socket);
   void __fastcall ServerSocketClientRead(TObject *Sender,
      TCustomWinSocket *Socket);
   void __fastcall ServerSocketAccept(TObject *Sender,
      TCustomWinSocket *Socket);
   void __fastcall ServerSocketClientConnect(TObject *Sender,
      TCustomWinSocket *Socket);
   void __fastcall ClientSocketError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode);
        void __fastcall Zamknij1Click(TObject *Sender);
        void __fastcall FileListenItemClick(TObject *Sender);
        void __fastcall ClientSocketDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ClientSocketConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall Help1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        bool IsServer;
        String Server;
        __fastcall TChatForm(TComponent* Owner);
};

//---------------------------------------------------------------------------
extern TChatForm *ChatForm;
//---------------------------------------------------------------------------
#endif
