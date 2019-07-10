object Form1: TForm1
  Left = 280
  Top = 200
  Width = 342
  Height = 215
  Caption = 'Krokomierz v1.2 by Adam Grabowski'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 72
    Height = 13
    Caption = 'Liczba krok'#243'w:'
  end
  object Label2: TLabel
    Left = 24
    Top = 120
    Width = 202
    Height = 13
    Caption = 'Optymalna ilosc krok'#243'w dziennie to 10 000'
  end
  object Label3: TLabel
    Left = 24
    Top = 56
    Width = 30
    Height = 20
    Caption = 'KM:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 72
    Top = 56
    Width = 24
    Height = 20
    Caption = '----'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 24
    Top = 80
    Width = 35
    Height = 20
    Caption = 'kcal:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 72
    Top = 80
    Width = 24
    Height = 20
    Caption = '----'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 96
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '0'
    OnKeyUp = Edit1KeyUp
  end
  object Button1: TButton
    Left = 232
    Top = 16
    Width = 81
    Height = 25
    Caption = 'Oblicz'
    TabOrder = 1
    OnClick = Button1Click
  end
  object ProgressBar1: TProgressBar
    Left = 24
    Top = 144
    Width = 289
    Height = 17
    Min = 0
    Max = 10000
    TabOrder = 2
  end
end
