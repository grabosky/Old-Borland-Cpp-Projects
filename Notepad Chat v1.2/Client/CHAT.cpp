//----------------------------------------------------------------------------
//Borland C++Builder
//Copyright (c) 1987, 1997-2002 Borland International Inc. All Rights Reserved.
//----------------------------------------------------------------------------
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USEFORM("main.cpp", ChatForm);
USEFORM("info.cpp", Form1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
          Application->Initialize();
          Application->Title = "Notatnik - Bez tytu³u";
                 Application->CreateForm(__classid(TChatForm), &ChatForm);
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
          Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
