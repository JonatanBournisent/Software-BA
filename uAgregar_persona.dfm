object fAgregar_persona: TfAgregar_persona
  Left = 340
  Top = 42
  BorderStyle = bsDialog
  Caption = '  Agregar una persona a la base de datos'
  ClientHeight = 648
  ClientWidth = 809
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
    Width = 793
    Height = 633
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 16
    Width = 345
    Height = 313
    Caption = 'Informacion personal'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 19
      Width = 40
      Height = 13
      Caption = 'Nombre:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 8
      Top = 43
      Width = 40
      Height = 13
      Caption = 'Apellido:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 8
      Top = 67
      Width = 102
      Height = 13
      Caption = 'Fecha de nacimiento:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 8
      Top = 91
      Width = 61
      Height = 13
      Caption = 'Tel'#233'fono fijo:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 8
      Top = 115
      Width = 79
      Height = 13
      Caption = 'Tel'#233'fono celular:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 8
      Top = 139
      Width = 27
      Height = 13
      Caption = 'email:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label7: TLabel
      Left = 8
      Top = 163
      Width = 48
      Height = 13
      Caption = 'Direcci'#243'n:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label8: TLabel
      Left = 8
      Top = 187
      Width = 36
      Height = 13
      Caption = 'Ciudad:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label9: TLabel
      Left = 8
      Top = 211
      Width = 47
      Height = 13
      Caption = 'Provincia:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label10: TLabel
      Left = 8
      Top = 235
      Width = 23
      Height = 13
      Caption = 'Pais:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label11: TLabel
      Left = 8
      Top = 259
      Width = 55
      Height = 13
      Caption = 'Ocupacion:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label12: TLabel
      Left = 8
      Top = 283
      Width = 57
      Height = 13
      Caption = 'Estado civil:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object CheckBox1: TCheckBox
      Left = 248
      Top = 66
      Width = 89
      Height = 17
      Caption = 'Desconocida'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object nombre: TDBEdit
      Left = 120
      Top = 16
      Width = 121
      Height = 21
      DataField = 'nombre'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 25
      ParentFont = False
      TabOrder = 1
    end
    object apellido: TDBEdit
      Left = 120
      Top = 40
      Width = 121
      Height = 21
      DataField = 'apellido'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 30
      ParentFont = False
      TabOrder = 2
    end
    object fecha_nacimiento: TJvDBDateTimePicker
      Left = 120
      Top = 64
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5722462732
      Time = 41730.5722462732
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 3
      DropDownDate = 41730
      NullText = 'Desconocida'
      DataField = 'fecha_nacimiento'
      DataSource = DataSource1
    end
    object tel_fijo: TDBEdit
      Left = 120
      Top = 88
      Width = 121
      Height = 21
      DataField = 'tel_fijo'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 20
      ParentFont = False
      TabOrder = 4
    end
    object tel_movil: TDBEdit
      Left = 120
      Top = 112
      Width = 121
      Height = 21
      DataField = 'tel_movil'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 20
      ParentFont = False
      TabOrder = 5
    end
    object email: TDBEdit
      Left = 120
      Top = 136
      Width = 121
      Height = 21
      DataField = 'email'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 35
      ParentFont = False
      TabOrder = 6
    end
    object direccion: TDBEdit
      Left = 120
      Top = 160
      Width = 121
      Height = 21
      DataField = 'direccion'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 40
      ParentFont = False
      TabOrder = 7
    end
    object ciudad: TDBEdit
      Left = 120
      Top = 184
      Width = 121
      Height = 21
      DataField = 'ciudad'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 20
      ParentFont = False
      TabOrder = 8
    end
    object provincia: TDBEdit
      Left = 120
      Top = 208
      Width = 121
      Height = 21
      DataField = 'provincia'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 20
      ParentFont = False
      TabOrder = 9
    end
    object pais: TDBEdit
      Left = 120
      Top = 232
      Width = 121
      Height = 21
      DataField = 'pais'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 15
      ParentFont = False
      TabOrder = 10
    end
    object ocupacion: TDBEdit
      Left = 120
      Top = 256
      Width = 121
      Height = 21
      DataField = 'ocupacion'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 25
      ParentFont = False
      TabOrder = 11
    end
    object estado_civil: TDBComboBox
      Left = 120
      Top = 280
      Width = 121
      Height = 21
      DataField = 'estado_civil'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      Items.Strings = (
        'Casado/a'
        'Divorcioado/a'
        'Separado/a'
        'Soltero/a')
      ParentFont = False
      Sorted = True
      TabOrder = 12
    end
  end
  object GroupBox2: TGroupBox
    Left = 16
    Top = 336
    Width = 777
    Height = 265
    Caption = 'Informacion relacionada con la iglesia'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object Label13: TLabel
      Left = 16
      Top = 27
      Width = 97
      Height = 13
      Caption = 'Numero de miembro:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label14: TLabel
      Left = 16
      Top = 123
      Width = 98
      Height = 13
      Caption = 'Fecha de recepci'#243'n:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label15: TLabel
      Left = 16
      Top = 147
      Width = 93
      Height = 13
      Caption = 'Fecha de bautismo:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label16: TLabel
      Left = 16
      Top = 171
      Width = 44
      Height = 13
      Caption = 'SERIE 1:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label17: TLabel
      Left = 16
      Top = 195
      Width = 44
      Height = 13
      Caption = 'SERIE 2:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label18: TLabel
      Left = 16
      Top = 219
      Width = 44
      Height = 13
      Caption = 'SERIE 3:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label19: TLabel
      Left = 16
      Top = 243
      Width = 44
      Height = 13
      Caption = 'SERIE 4:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label20: TLabel
      Left = 368
      Top = 27
      Width = 44
      Height = 13
      Caption = 'SERIE 5:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label21: TLabel
      Left = 368
      Top = 51
      Width = 89
      Height = 13
      Caption = 'SECAM Ministerial:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label22: TLabel
      Left = 368
      Top = 75
      Width = 66
      Height = 13
      Caption = 'SECAM FIET:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label23: TLabel
      Left = 16
      Top = 51
      Width = 47
      Height = 13
      Caption = 'Ministerio:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label24: TLabel
      Left = 16
      Top = 75
      Width = 77
      Height = 13
      Caption = 'Grupo peque'#241'o:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label25: TLabel
      Left = 368
      Top = 104
      Width = 38
      Height = 13
      Caption = 'Notas:'
    end
    object Label26: TLabel
      Left = 16
      Top = 99
      Width = 67
      Height = 13
      Caption = 'Area de edad:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object CheckBox2: TCheckBox
      Left = 248
      Top = 122
      Width = 89
      Height = 17
      Caption = 'Desconocida'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = CheckBox2Click
    end
    object CheckBox3: TCheckBox
      Left = 248
      Top = 146
      Width = 89
      Height = 17
      Caption = 'No bautizado'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = CheckBox3Click
    end
    object CheckBox4: TCheckBox
      Left = 248
      Top = 170
      Width = 89
      Height = 17
      Caption = 'No realizada'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = CheckBox4Click
    end
    object CheckBox5: TCheckBox
      Left = 248
      Top = 194
      Width = 89
      Height = 17
      Caption = 'No realizada'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnClick = CheckBox5Click
    end
    object CheckBox6: TCheckBox
      Left = 248
      Top = 218
      Width = 89
      Height = 17
      Caption = 'No realizada'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      OnClick = CheckBox6Click
    end
    object CheckBox7: TCheckBox
      Left = 248
      Top = 242
      Width = 89
      Height = 17
      Caption = 'No realizada'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 5
      OnClick = CheckBox7Click
    end
    object CheckBox8: TCheckBox
      Left = 600
      Top = 26
      Width = 89
      Height = 17
      Caption = 'No realizada'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      OnClick = CheckBox8Click
    end
    object CheckBox9: TCheckBox
      Left = 600
      Top = 50
      Width = 89
      Height = 17
      Caption = 'No realizado'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
      OnClick = CheckBox9Click
    end
    object CheckBox10: TCheckBox
      Left = 600
      Top = 74
      Width = 89
      Height = 17
      Caption = 'No realizado'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 8
      OnClick = CheckBox10Click
    end
    object nro_miembro: TDBEdit
      Left = 120
      Top = 24
      Width = 65
      Height = 21
      DataField = 'nro_miembro'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 8
      ParentFont = False
      TabOrder = 9
    end
    object recepcion: TJvDBDateTimePicker
      Left = 120
      Top = 120
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.9640397106
      Time = 41730.9640397106
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 10
      DropDownDate = 41730
      NullText = 'Desconocida'
      DataField = 'recepcion'
      DataSource = DataSource1
    end
    object bautismo: TJvDBDateTimePicker
      Left = 120
      Top = 144
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5811671644
      Time = 41730.5811671644
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 11
      DropDownDate = 41730
      NullText = 'No bautizado'
      DataField = 'bautismo'
      DataSource = DataSource1
    end
    object serie_1: TJvDBDateTimePicker
      Left = 120
      Top = 168
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5828079745
      Time = 41730.5828079745
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 12
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'serie_1'
      DataSource = DataSource1
    end
    object serie_2: TJvDBDateTimePicker
      Left = 120
      Top = 192
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5830615162
      Time = 41730.5830615162
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 13
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'serie_2'
      DataSource = DataSource1
    end
    object serie_3: TJvDBDateTimePicker
      Left = 120
      Top = 216
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5834801736
      Time = 41730.5834801736
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 14
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'serie_3'
      DataSource = DataSource1
    end
    object serie_4: TJvDBDateTimePicker
      Left = 120
      Top = 240
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5838395139
      Time = 41730.5838395139
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 15
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'serie_4'
      DataSource = DataSource1
    end
    object serie_5: TJvDBDateTimePicker
      Left = 472
      Top = 24
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5841890856
      Time = 41730.5841890856
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 16
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'serie_5'
      DataSource = DataSource1
    end
    object secam_ministerial: TJvDBDateTimePicker
      Left = 472
      Top = 48
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5848866088
      Time = 41730.5848866088
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 17
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'secam_ministerial'
      DataSource = DataSource1
    end
    object secam_fiet: TJvDBDateTimePicker
      Left = 472
      Top = 72
      Width = 121
      Height = 21
      CalAlignment = dtaLeft
      Date = 41730.5850846296
      Time = 41730.5850846296
      DateFormat = dfShort
      DateMode = dmUpDown
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 18
      DropDownDate = 41730
      NullText = 'No realizada'
      DataField = 'secam_fiet'
      DataSource = DataSource1
    end
    object ministerio: TJvDBLookupCombo
      Left = 120
      Top = 48
      Width = 161
      Height = 21
      DropDownCount = 15
      DataField = 'ministerio'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      LookupField = 'ministerio'
      LookupSource = DataSource3
      ParentFont = False
      TabOrder = 19
    end
    object gp: TJvDBLookupCombo
      Left = 120
      Top = 72
      Width = 161
      Height = 21
      DropDownCount = 15
      DataField = 'gp'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ListStyle = lsDelimited
      LookupField = 'nombre'
      LookupSource = DataSource2
      ParentFont = False
      TabOrder = 20
    end
    object notas: TDBMemo
      Left = 368
      Top = 120
      Width = 401
      Height = 137
      DataField = 'notas'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      MaxLength = 300
      ParentFont = False
      TabOrder = 21
    end
    object areas: TDBComboBox
      Left = 120
      Top = 96
      Width = 121
      Height = 21
      DataField = 'campo_char1'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      Items.Strings = (
        'Iglesia Junior'
        'Preadolescentes'
        'Adolescentes'
        'J'#243'venes'
        'Red de amigos'
        'Matrimonios j'#243'venes'
        'Intermedios'
        'Adultos')
      ParentFont = False
      TabOrder = 22
    end
  end
  object GroupBox3: TGroupBox
    Left = 376
    Top = 16
    Width = 417
    Height = 313
    Caption = 'Imagen'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    object foto: TJvDBImage
      Left = 9
      Top = 16
      Width = 400
      Height = 252
      DataField = 'foto'
      DataSource = DataSource1
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object Button4: TButton
      Left = 232
      Top = 280
      Width = 97
      Height = 25
      Caption = 'Quitar imagen'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button4Click
    end
    object Button1: TButton
      Left = 72
      Top = 280
      Width = 97
      Height = 25
      Caption = 'Agregar imagen'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Button1Click
    end
  end
  object BitBtn2: TBitBtn
    Left = 488
    Top = 608
    Width = 113
    Height = 25
    Caption = 'Cancelar'
    TabOrder = 3
    OnClick = BitBtn2Click
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
  object BitBtn1: TBitBtn
    Left = 208
    Top = 608
    Width = 113
    Height = 25
    Caption = 'Agregar'
    Default = True
    TabOrder = 4
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
  object IBDatabase1: TIBDatabase
    LoginPrompt = False
    IdleTimer = 0
    SQLDialect = 3
    TraceFlags = []
    Left = 880
    Top = 136
  end
  object IBTransaction1: TIBTransaction
    Active = False
    DefaultDatabase = IBDatabase1
    Params.Strings = (
      'read_committed'
      'rec_version'
      'nowait')
    AutoStopAction = saNone
    Left = 880
    Top = 160
  end
  object IBTable1: TIBTable
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 888
    Top = 176
  end
  object DataSource1: TDataSource
    DataSet = IBTable1
    Left = 896
    Top = 184
  end
  object DataSource2: TDataSource
    DataSet = IBQuery2
    Left = 888
    Top = 296
  end
  object DataSource3: TDataSource
    DataSet = IBQuery3
    Left = 880
    Top = 256
  end
  object IBQuery1: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 896
    Top = 280
  end
  object OpenDialog1: TOpenDialog
    Filter = 
      'Formatos soportados (*.jpg;*.jpeg)|*.jpg;*.jpeg|JPEG Image File ' +
      '(*.jpg)|*.jpg|JPEG Image File (*.jpeg)|*.jpeg'
    Options = [ofHideReadOnly, ofNoChangeDir, ofEnableSizing]
    Left = 728
    Top = 296
  end
  object IBQuery2: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 752
  end
  object IBQuery3: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 656
  end
end
