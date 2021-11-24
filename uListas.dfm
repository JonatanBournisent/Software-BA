object fListas: TfListas
  Left = 323
  Top = 55
  BorderStyle = bsDialog
  Caption = '  Crear listas de datos de personas'
  ClientHeight = 642
  ClientWidth = 873
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 8
    Top = 8
    Width = 857
    Height = 625
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 16
    Width = 201
    Height = 113
    Caption = 'Filtrar por GP'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    object JvDBLookupCombo1: TJvDBLookupCombo
      Left = 8
      Top = 32
      Width = 185
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      LookupField = 'nombre'
      LookupSource = DataSource2
      ParentFont = False
      TabOrder = 0
    end
    object BitBtn1: TBitBtn
      Left = 40
      Top = 72
      Width = 121
      Height = 25
      Caption = 'Crear lista'
      Default = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = BitBtn1Click
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333330000333333333333333333333333F33333333333
        00003333344333333333333333388F3333333333000033334224333333333333
        338338F3333333330000333422224333333333333833338F3333333300003342
        222224333333333383333338F3333333000034222A22224333333338F338F333
        8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
        33333338F83338F338F33333000033A33333A222433333338333338F338F3333
        0000333333333A222433333333333338F338F33300003333333333A222433333
        333333338F338F33000033333333333A222433333333333338F338F300003333
        33333333A222433333333333338F338F00003333333333333A22433333333333
        3338F38F000033333333333333A223333333333333338F830000333333333333
        333A333333333333333338330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
  end
  object GroupBox2: TGroupBox
    Left = 224
    Top = 16
    Width = 201
    Height = 113
    Caption = 'Filtrar por ministerio'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object JvDBLookupCombo2: TJvDBLookupCombo
      Left = 8
      Top = 32
      Width = 185
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      LookupField = 'ministerio'
      LookupSource = DataSource3
      ParentFont = False
      TabOrder = 0
    end
    object BitBtn2: TBitBtn
      Left = 40
      Top = 72
      Width = 121
      Height = 25
      Caption = 'Crear lista'
      Default = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = BitBtn2Click
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333330000333333333333333333333333F33333333333
        00003333344333333333333333388F3333333333000033334224333333333333
        338338F3333333330000333422224333333333333833338F3333333300003342
        222224333333333383333338F3333333000034222A22224333333338F338F333
        8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
        33333338F83338F338F33333000033A33333A222433333338333338F338F3333
        0000333333333A222433333333333338F338F33300003333333333A222433333
        333333338F338F33000033333333333A222433333333333338F338F300003333
        33333333A222433333333333338F338F00003333333333333A22433333333333
        3338F38F000033333333333333A223333333333333338F830000333333333333
        333A333333333333333338330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
  end
  object GroupBox3: TGroupBox
    Left = 576
    Top = 16
    Width = 281
    Height = 113
    Caption = 'Filtrar por edad'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    object Label1: TLabel
      Left = 8
      Top = 26
      Width = 109
      Height = 13
      Caption = 'M'#237'nima edad (inclu'#237'da)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 8
      Top = 50
      Width = 115
      Height = 13
      Caption = 'M'#225'xima edad (sin incluir)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 128
      Top = 23
      Width = 33
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      Text = '0'
    end
    object Edit2: TEdit
      Left = 128
      Top = 47
      Width = 33
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      Text = '0'
    end
    object CheckBox1: TCheckBox
      Left = 8
      Top = 75
      Width = 169
      Height = 17
      Caption = 'Incluir s'#243'lo personas casadas'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = CheckBox1Click
    end
    object BitBtn3: TBitBtn
      Left = 184
      Top = 32
      Width = 83
      Height = 25
      Caption = 'Crear lista'
      Default = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnClick = BitBtn3Click
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333330000333333333333333333333333F33333333333
        00003333344333333333333333388F3333333333000033334224333333333333
        338338F3333333330000333422224333333333333833338F3333333300003342
        222224333333333383333338F3333333000034222A22224333333338F338F333
        8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
        33333338F83338F338F33333000033A33333A222433333338333338F338F3333
        0000333333333A222433333333333338F338F33300003333333333A222433333
        333333338F338F33000033333333333A222433333333333338F338F300003333
        33333333A222433333333333338F338F00003333333333333A22433333333333
        3338F38F000033333333333333A223333333333333338F830000333333333333
        333A333333333333333338330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
    object CheckBox2: TCheckBox
      Left = 8
      Top = 92
      Width = 169
      Height = 17
      Caption = 'Excluir personas casadas'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      OnClick = CheckBox2Click
    end
  end
  object GroupBox4: TGroupBox
    Left = 16
    Top = 136
    Width = 185
    Height = 65
    Caption = 'Filtrar por ocupaci'#243'n'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    object Label3: TLabel
      Left = 16
      Top = 16
      Width = 55
      Height = 13
      Caption = 'Ocupaci'#243'n:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Edit3: TEdit
      Left = 16
      Top = 32
      Width = 153
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnChange = Edit3Change
    end
  end
  object GroupBox5: TGroupBox
    Left = 216
    Top = 136
    Width = 345
    Height = 65
    Caption = 'Otros filtros'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    object Button1: TButton
      Left = 16
      Top = 40
      Width = 89
      Height = 17
      Caption = 'Sin GP'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button5: TButton
      Left = 128
      Top = 40
      Width = 89
      Height = 17
      Caption = 'Sin ministerio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 240
      Top = 40
      Width = 89
      Height = 17
      Caption = 'No bautizados'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Button6Click
    end
    object Button2: TButton
      Left = 16
      Top = 16
      Width = 89
      Height = 17
      Caption = 'Con GP'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 128
      Top = 16
      Width = 89
      Height = 17
      Caption = 'Con ministerio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 240
      Top = 16
      Width = 89
      Height = 17
      Caption = 'Bautizados'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      OnClick = Button4Click
    end
  end
  object GroupBox6: TGroupBox
    Left = 576
    Top = 136
    Width = 281
    Height = 65
    Caption = 'Opciones de exportaci'#243'n'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    object Button7: TButton
      Left = 16
      Top = 20
      Width = 121
      Height = 37
      Caption = 'Exportar lista a Excel'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button7Click
    end
    object Button8: TButton
      Left = 144
      Top = 20
      Width = 123
      Height = 37
      Caption = 'Exportar lista de email'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button8Click
    end
  end
  object BitBtn4: TBitBtn
    Left = 352
    Top = 600
    Width = 153
    Height = 25
    Caption = 'Salir'
    TabOrder = 6
    OnClick = BitBtn4Click
    Glyph.Data = {
      DE010000424DDE01000000000000760000002800000024000000120000000100
      0400000000006801000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      333333333333333333333333000033338833333333333333333F333333333333
      0000333911833333983333333388F333333F3333000033391118333911833333
      38F38F333F88F33300003339111183911118333338F338F3F8338F3300003333
      911118111118333338F3338F833338F3000033333911111111833333338F3338
      3333F8330000333333911111183333333338F333333F83330000333333311111
      8333333333338F3333383333000033333339111183333333333338F333833333
      00003333339111118333333333333833338F3333000033333911181118333333
      33338333338F333300003333911183911183333333383338F338F33300003333
      9118333911183333338F33838F338F33000033333913333391113333338FF833
      38F338F300003333333333333919333333388333338FFF830000333333333333
      3333333333333333333888330000333333333333333333333333333333333333
      0000}
    NumGlyphs = 2
  end
  object GroupBox7: TGroupBox
    Left = 16
    Top = 240
    Width = 841
    Height = 353
    Caption = 'Resultados'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    object DBGrid1: TDBGrid
      Left = 8
      Top = 24
      Width = 825
      Height = 321
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = [fsBold]
      Columns = <
        item
          Expanded = False
          FieldName = 'nombre'
          Title.Alignment = taCenter
          Title.Caption = 'Nombre'
          Width = 85
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'apellido'
          Title.Alignment = taCenter
          Title.Caption = 'Apellido'
          Width = 104
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'tel_fijo'
          Title.Alignment = taCenter
          Title.Caption = 'Tel'#233'fono Fijo'
          Width = 91
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'tel_movil'
          Title.Alignment = taCenter
          Title.Caption = 'Celular'
          Width = 80
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'email'
          Title.Alignment = taCenter
          Width = 156
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'direccion'
          Title.Alignment = taCenter
          Title.Caption = 'Direcci'#243'n'
          Width = 154
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'ocupacion'
          Title.Alignment = taCenter
          Title.Caption = 'Ocupaci'#243'n'
          Width = 114
          Visible = True
        end>
    end
  end
  object GroupBox8: TGroupBox
    Left = 16
    Top = 240
    Width = 841
    Height = 105
    Caption = 'Avanzado'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    object CheckBox3: TCheckBox
      Left = 8
      Top = 16
      Width = 73
      Height = 17
      Caption = 'Con serie 1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = CheckBox3Click
    end
    object CheckBox4: TCheckBox
      Left = 8
      Top = 32
      Width = 73
      Height = 17
      Caption = 'Sin serie 1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = CheckBox4Click
    end
    object CheckBox5: TCheckBox
      Left = 96
      Top = 16
      Width = 81
      Height = 17
      Caption = 'Con serie 2'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = CheckBox5Click
    end
    object CheckBox6: TCheckBox
      Left = 96
      Top = 32
      Width = 73
      Height = 17
      Caption = 'Sin serie 2'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnClick = CheckBox6Click
    end
    object CheckBox7: TCheckBox
      Left = 184
      Top = 16
      Width = 73
      Height = 17
      Caption = 'Con serie 3'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      OnClick = CheckBox7Click
    end
    object CheckBox8: TCheckBox
      Left = 184
      Top = 32
      Width = 73
      Height = 17
      Caption = 'Sin serie 3'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      OnClick = CheckBox8Click
    end
    object CheckBox9: TCheckBox
      Left = 280
      Top = 16
      Width = 81
      Height = 17
      Caption = 'Con serie 4'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      OnClick = CheckBox9Click
    end
    object CheckBox10: TCheckBox
      Left = 280
      Top = 32
      Width = 73
      Height = 17
      Caption = 'Sin serie 4'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      OnClick = CheckBox10Click
    end
    object CheckBox11: TCheckBox
      Left = 376
      Top = 16
      Width = 81
      Height = 17
      Caption = 'Con serie 5'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 8
      OnClick = CheckBox11Click
    end
    object CheckBox12: TCheckBox
      Left = 376
      Top = 32
      Width = 81
      Height = 17
      Caption = 'Sin serie 5'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 9
      OnClick = CheckBox12Click
    end
    object CheckBox13: TCheckBox
      Left = 472
      Top = 16
      Width = 97
      Height = 17
      Caption = 'Con recepci'#243'n'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 10
      OnClick = CheckBox13Click
    end
    object CheckBox14: TCheckBox
      Left = 472
      Top = 32
      Width = 97
      Height = 17
      Caption = 'Sin recepci'#243'n'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 11
      OnClick = CheckBox14Click
    end
    object CheckBox15: TCheckBox
      Left = 584
      Top = 16
      Width = 97
      Height = 17
      Caption = 'Bautizados'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 12
      OnClick = CheckBox15Click
    end
    object CheckBox16: TCheckBox
      Left = 584
      Top = 32
      Width = 97
      Height = 17
      Caption = 'No bautizados'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 13
      OnClick = CheckBox16Click
    end
    object CheckBox17: TCheckBox
      Left = 696
      Top = 16
      Width = 65
      Height = 17
      Caption = 'Con GP'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 14
      OnClick = CheckBox17Click
    end
    object CheckBox18: TCheckBox
      Left = 696
      Top = 32
      Width = 57
      Height = 17
      Caption = 'Sin GP'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 15
      OnClick = CheckBox18Click
    end
    object CheckBox19: TCheckBox
      Left = 8
      Top = 64
      Width = 97
      Height = 17
      Caption = 'Con ministerio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 16
      OnClick = CheckBox19Click
    end
    object CheckBox20: TCheckBox
      Left = 8
      Top = 80
      Width = 97
      Height = 17
      Caption = 'Sin ministerio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 17
      OnClick = CheckBox20Click
    end
    object CheckBox21: TCheckBox
      Left = 104
      Top = 64
      Width = 177
      Height = 17
      Caption = 'Fecha de nacimiento conocida'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 18
      OnClick = CheckBox21Click
    end
    object CheckBox22: TCheckBox
      Left = 104
      Top = 80
      Width = 185
      Height = 17
      Caption = 'Fecha de nacimiento desconocida'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 19
      OnClick = CheckBox22Click
    end
    object CheckBox23: TCheckBox
      Left = 304
      Top = 64
      Width = 129
      Height = 17
      Caption = 'Con SECAM ministerial'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 20
      OnClick = CheckBox23Click
    end
    object CheckBox24: TCheckBox
      Left = 304
      Top = 80
      Width = 129
      Height = 17
      Caption = 'Sin SECAM ministerial'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 21
      OnClick = CheckBox24Click
    end
    object CheckBox25: TCheckBox
      Left = 456
      Top = 64
      Width = 105
      Height = 17
      Caption = 'Con SECAM FIET'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 22
      OnClick = CheckBox25Click
    end
    object CheckBox26: TCheckBox
      Left = 456
      Top = 80
      Width = 105
      Height = 17
      Caption = 'Sin SECAM FIET'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 23
      OnClick = CheckBox26Click
    end
    object CheckBox27: TCheckBox
      Left = 584
      Top = 64
      Width = 73
      Height = 17
      Caption = 'Soltero/a'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 24
      OnClick = CheckBox27Click
    end
    object CheckBox28: TCheckBox
      Left = 584
      Top = 80
      Width = 73
      Height = 17
      Caption = 'Casado/a'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 25
      OnClick = CheckBox28Click
    end
    object CheckBox29: TCheckBox
      Left = 664
      Top = 64
      Width = 97
      Height = 17
      Caption = 'Divorciado/a'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 26
      OnClick = CheckBox29Click
    end
    object CheckBox30: TCheckBox
      Left = 664
      Top = 80
      Width = 97
      Height = 17
      Caption = 'Separado/a'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 27
      OnClick = CheckBox30Click
    end
    object BitBtn5: TBitBtn
      Left = 760
      Top = 43
      Width = 73
      Height = 25
      Caption = 'Aplicar'
      Default = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 28
      OnClick = BitBtn5Click
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333330000333333333333333333333333F33333333333
        00003333344333333333333333388F3333333333000033334224333333333333
        338338F3333333330000333422224333333333333833338F3333333300003342
        222224333333333383333338F3333333000034222A22224333333338F338F333
        8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
        33333338F83338F338F33333000033A33333A222433333338333338F338F3333
        0000333333333A222433333333333338F338F33300003333333333A222433333
        333333338F338F33000033333333333A222433333333333338F338F300003333
        33333333A222433333333333338F338F00003333333333333A22433333333333
        3338F38F000033333333333333A223333333333333338F830000333333333333
        333A333333333333333338330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
  end
  object GroupBox9: TGroupBox
    Left = 432
    Top = 16
    Width = 137
    Height = 113
    Caption = 'Filtrar por '#225'rea'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
    object BitBtn6: TBitBtn
      Left = 16
      Top = 72
      Width = 105
      Height = 25
      Caption = 'Crear lista'
      Default = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = BitBtn6Click
      Glyph.Data = {
        DE010000424DDE01000000000000760000002800000024000000120000000100
        0400000000006801000000000000000000001000000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333330000333333333333333333333333F33333333333
        00003333344333333333333333388F3333333333000033334224333333333333
        338338F3333333330000333422224333333333333833338F3333333300003342
        222224333333333383333338F3333333000034222A22224333333338F338F333
        8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
        33333338F83338F338F33333000033A33333A222433333338333338F338F3333
        0000333333333A222433333333333338F338F33300003333333333A222433333
        333333338F338F33000033333333333A222433333333333338F338F300003333
        33333333A222433333333333338F338F00003333333333333A22433333333333
        3338F38F000033333333333333A223333333333333338F830000333333333333
        333A333333333333333338330000333333333333333333333333333333333333
        0000}
      NumGlyphs = 2
    end
    object ComboBox1: TComboBox
      Left = 8
      Top = 32
      Width = 121
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 1
      Items.Strings = (
        'Iglesia Junior'
        'Preadolescentes'
        'Adolescentes'
        'J'#243'venes'
        'Red de amigos'
        'Matrimonios j'#243'venes'
        'Intermedios'
        'Adultos')
    end
  end
  object Button9: TButton
    Left = 16
    Top = 208
    Width = 185
    Height = 25
    Caption = 'Mostrar opciones avanzadas'
    TabOrder = 10
    OnClick = Button9Click
  end
  object IBDatabase1: TIBDatabase
    LoginPrompt = False
    IdleTimer = 0
    SQLDialect = 3
    TraceFlags = []
    Left = 936
    Top = 80
  end
  object IBTransaction1: TIBTransaction
    Active = False
    DefaultDatabase = IBDatabase1
    Params.Strings = (
      'read_committed'
      'rec_version'
      'nowait')
    AutoStopAction = saNone
    Left = 944
    Top = 56
  end
  object IBQuery1: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 936
    Top = 24
  end
  object DataSource1: TDataSource
    DataSet = IBQuery1
    Left = 936
    Top = 112
  end
  object IBTable1: TIBTable
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 872
    Top = 144
  end
  object DataSource2: TDataSource
    DataSet = IBTable1
    Left = 872
    Top = 184
  end
  object DataSource3: TDataSource
    DataSet = IBTable2
    Left = 928
    Top = 192
  end
  object IBTable2: TIBTable
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 928
    Top = 152
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = '.txt'
    Filter = 'Archivo de texto (*.txt)|*.txt'
    Options = [ofHideReadOnly, ofNoChangeDir, ofEnableSizing]
    Left = 808
    Top = 568
  end
  object IBQuery2: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 248
    Top = 65520
  end
end
