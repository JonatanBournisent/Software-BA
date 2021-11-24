object fCumples: TfCumples
  Left = 210
  Top = 112
  BorderStyle = bsDialog
  Caption = 'Pr'#243'ximos cumplea'#241'os'
  ClientHeight = 361
  ClientWidth = 889
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 8
    Top = 8
    Width = 873
    Height = 345
  end
  object DBGrid1: TDBGrid
    Left = 16
    Top = 16
    Width = 857
    Height = 297
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'nombre'
        Title.Alignment = taCenter
        Title.Caption = 'Nombre'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = [fsBold]
        Width = 118
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'apellido'
        Title.Alignment = taCenter
        Title.Caption = 'Apellido'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = [fsBold]
        Width = 163
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'email'
        Title.Alignment = taCenter
        Title.Caption = 'Email'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = [fsBold]
        Width = 159
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'tel_fijo'
        Title.Alignment = taCenter
        Title.Caption = 'Tel'#233'fono fijo'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = [fsBold]
        Width = 121
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'tel_movil'
        Title.Alignment = taCenter
        Title.Caption = 'Celular'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = [fsBold]
        Width = 129
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'fecha_nacimiento'
        Title.Alignment = taCenter
        Title.Caption = 'Fecha de nacimiento'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = [fsBold]
        Width = 127
        Visible = True
      end>
  end
  object BitBtn1: TBitBtn
    Left = 384
    Top = 320
    Width = 121
    Height = 25
    Caption = 'Listo!'
    Default = True
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
  object IBDatabase1: TIBDatabase
    LoginPrompt = False
    IdleTimer = 0
    SQLDialect = 3
    TraceFlags = []
    Left = 16
    Top = 8
  end
  object IBTransaction1: TIBTransaction
    Active = False
    DefaultDatabase = IBDatabase1
    Params.Strings = (
      'read_committed'
      'rec_version'
      'nowait')
    AutoStopAction = saNone
    Left = 56
    Top = 8
  end
  object IBQuery1: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BeforeOpen = IBQuery1BeforeOpen
    BufferChunks = 1000
    CachedUpdates = False
    Left = 104
    Top = 8
    object IBQuery1fecha_nacimiento: TDateTimeField
      FieldName = 'fecha_nacimiento'
    end
    object IBQuery1nombre: TStringField
      FieldName = 'nombre'
    end
    object IBQuery1apellido: TStringField
      FieldName = 'apellido'
      Size = 25
    end
    object IBQuery1email: TStringField
      FieldName = 'email'
      Size = 40
    end
    object IBQuery1tel_fijo: TStringField
      FieldName = 'tel_fijo'
    end
    object IBQuery1tel_movil: TStringField
      FieldName = 'tel_movil'
    end
  end
  object DataSource1: TDataSource
    DataSet = IBQuery1
    Left = 112
    Top = 64
  end
end
