object fAdminGP: TfAdminGP
  Left = 387
  Top = 123
  BorderStyle = bsDialog
  Caption = '  Administraci'#243'n de GP y Ministerios'
  ClientHeight = 505
  ClientWidth = 608
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
    Width = 593
    Height = 489
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 16
    Width = 281
    Height = 433
    Caption = 'Grupos peque'#241'os'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    object GroupBox2: TGroupBox
      Left = 16
      Top = 24
      Width = 249
      Height = 97
      Caption = 'Agregar GP'
      TabOrder = 0
      object Edit1: TEdit
        Left = 16
        Top = 24
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        MaxLength = 35
        ParentFont = False
        TabOrder = 0
      end
      object BitBtn1: TBitBtn
        Left = 64
        Top = 56
        Width = 121
        Height = 25
        Caption = 'Agregar'
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
    object GroupBox3: TGroupBox
      Left = 16
      Top = 144
      Width = 249
      Height = 161
      Caption = 'Reemplazar nombre de GP'
      TabOrder = 1
      object Label1: TLabel
        Left = 16
        Top = 24
        Width = 72
        Height = 13
        Caption = 'Nombre actual:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 16
        Top = 72
        Width = 73
        Height = 13
        Caption = 'Nuevo nombre:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Edit2: TEdit
        Left = 16
        Top = 88
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        MaxLength = 35
        ParentFont = False
        TabOrder = 0
      end
      object DBComboBox1: TJvDBLookupCombo
        Left = 16
        Top = 40
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        LookupField = 'nombre'
        LookupSource = DataSource1
        ParentFont = False
        TabOrder = 1
      end
      object BitBtn3: TBitBtn
        Left = 64
        Top = 120
        Width = 121
        Height = 25
        Caption = 'Cambiar nombre'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 2
        OnClick = BitBtn3Click
        Glyph.Data = {
          DE010000424DDE01000000000000760000002800000024000000120000000100
          0400000000006801000000000000000000001000000000000000000000000000
          80000080000000808000800000008000800080800000C0C0C000808080000000
          FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333444444
          33333333333F8888883F33330000324334222222443333388F3833333388F333
          000032244222222222433338F8833FFFFF338F3300003222222AAAAA22243338
          F333F88888F338F30000322222A33333A2224338F33F8333338F338F00003222
          223333333A224338F33833333338F38F00003222222333333A444338FFFF8F33
          3338888300003AAAAAAA33333333333888888833333333330000333333333333
          333333333333333333FFFFFF000033333333333344444433FFFF333333888888
          00003A444333333A22222438888F333338F3333800003A2243333333A2222438
          F38F333333833338000033A224333334422224338338FFFFF8833338000033A2
          22444442222224338F3388888333FF380000333A2222222222AA243338FF3333
          33FF88F800003333AA222222AA33A3333388FFFFFF8833830000333333AAAAAA
          3333333333338888883333330000333333333333333333333333333333333333
          0000}
        NumGlyphs = 2
      end
    end
    object GroupBox4: TGroupBox
      Left = 16
      Top = 328
      Width = 249
      Height = 97
      Caption = 'Eliminar GP'
      TabOrder = 2
      object DBComboBox2: TJvDBLookupCombo
        Left = 16
        Top = 24
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        LookupField = 'nombre'
        LookupSource = DataSource1
        ParentFont = False
        TabOrder = 0
      end
      object BitBtn5: TBitBtn
        Left = 64
        Top = 56
        Width = 121
        Height = 25
        Cancel = True
        Caption = 'Eliminar GP'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        OnClick = BitBtn5Click
        Glyph.Data = {
          DE010000424DDE01000000000000760000002800000024000000120000000100
          0400000000006801000000000000000000001000000000000000000000000000
          80000080000000808000800000008000800080800000C0C0C000808080000000
          FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
          3333333333333FFFFF333333000033333388888833333333333F888888FFF333
          000033338811111188333333338833FFF388FF33000033381119999111833333
          38F338888F338FF30000339119933331111833338F388333383338F300003391
          13333381111833338F8F3333833F38F3000039118333381119118338F38F3338
          33F8F38F000039183333811193918338F8F333833F838F8F0000391833381119
          33918338F8F33833F8338F8F000039183381119333918338F8F3833F83338F8F
          000039183811193333918338F8F833F83333838F000039118111933339118338
          F3833F83333833830000339111193333391833338F33F8333FF838F300003391
          11833338111833338F338FFFF883F83300003339111888811183333338FF3888
          83FF83330000333399111111993333333388FFFFFF8833330000333333999999
          3333333333338888883333330000333333333333333333333333333333333333
          0000}
        NumGlyphs = 2
      end
    end
  end
  object GroupBox5: TGroupBox
    Left = 312
    Top = 16
    Width = 281
    Height = 433
    Caption = 'Ministerios'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object GroupBox6: TGroupBox
      Left = 16
      Top = 24
      Width = 249
      Height = 105
      Caption = 'Agregar ministerio'
      TabOrder = 0
      object Edit3: TEdit
        Left = 16
        Top = 24
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        MaxLength = 30
        ParentFont = False
        TabOrder = 0
      end
      object BitBtn2: TBitBtn
        Left = 64
        Top = 56
        Width = 121
        Height = 25
        Caption = 'Agregar'
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
    object GroupBox7: TGroupBox
      Left = 16
      Top = 328
      Width = 249
      Height = 97
      Caption = 'Eliminar ministerio'
      TabOrder = 1
      object DBComboBox3: TJvDBLookupCombo
        Left = 16
        Top = 24
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        LookupField = 'ministerio'
        LookupSource = DataSource2
        ParentFont = False
        TabOrder = 0
      end
      object BitBtn6: TBitBtn
        Left = 64
        Top = 56
        Width = 121
        Height = 25
        Cancel = True
        Caption = 'Eliminar ministerio'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        OnClick = BitBtn6Click
        Glyph.Data = {
          DE010000424DDE01000000000000760000002800000024000000120000000100
          0400000000006801000000000000000000001000000000000000000000000000
          80000080000000808000800000008000800080800000C0C0C000808080000000
          FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
          3333333333333FFFFF333333000033333388888833333333333F888888FFF333
          000033338811111188333333338833FFF388FF33000033381119999111833333
          38F338888F338FF30000339119933331111833338F388333383338F300003391
          13333381111833338F8F3333833F38F3000039118333381119118338F38F3338
          33F8F38F000039183333811193918338F8F333833F838F8F0000391833381119
          33918338F8F33833F8338F8F000039183381119333918338F8F3833F83338F8F
          000039183811193333918338F8F833F83333838F000039118111933339118338
          F3833F83333833830000339111193333391833338F33F8333FF838F300003391
          11833338111833338F338FFFF883F83300003339111888811183333338FF3888
          83FF83330000333399111111993333333388FFFFFF8833330000333333999999
          3333333333338888883333330000333333333333333333333333333333333333
          0000}
        NumGlyphs = 2
      end
    end
    object GroupBox8: TGroupBox
      Left = 16
      Top = 144
      Width = 249
      Height = 161
      Caption = 'Reemplazar ministerio'
      TabOrder = 2
      object Label3: TLabel
        Left = 16
        Top = 24
        Width = 72
        Height = 13
        Caption = 'Nombre actual:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Label4: TLabel
        Left = 16
        Top = 72
        Width = 73
        Height = 13
        Caption = 'Nuevo nombre:'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object DBComboBox4: TJvDBLookupCombo
        Left = 16
        Top = 40
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        LookupField = 'ministerio'
        LookupSource = DataSource2
        ParentFont = False
        TabOrder = 0
      end
      object Edit4: TEdit
        Left = 16
        Top = 88
        Width = 217
        Height = 21
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        MaxLength = 30
        ParentFont = False
        TabOrder = 1
      end
      object BitBtn4: TBitBtn
        Left = 64
        Top = 120
        Width = 121
        Height = 25
        Caption = 'Cambiar nombre'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 2
        OnClick = BitBtn4Click
        Glyph.Data = {
          DE010000424DDE01000000000000760000002800000024000000120000000100
          0400000000006801000000000000000000001000000000000000000000000000
          80000080000000808000800000008000800080800000C0C0C000808080000000
          FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333444444
          33333333333F8888883F33330000324334222222443333388F3833333388F333
          000032244222222222433338F8833FFFFF338F3300003222222AAAAA22243338
          F333F88888F338F30000322222A33333A2224338F33F8333338F338F00003222
          223333333A224338F33833333338F38F00003222222333333A444338FFFF8F33
          3338888300003AAAAAAA33333333333888888833333333330000333333333333
          333333333333333333FFFFFF000033333333333344444433FFFF333333888888
          00003A444333333A22222438888F333338F3333800003A2243333333A2222438
          F38F333333833338000033A224333334422224338338FFFFF8833338000033A2
          22444442222224338F3388888333FF380000333A2222222222AA243338FF3333
          33FF88F800003333AA222222AA33A3333388FFFFFF8833830000333333AAAAAA
          3333333333338888883333330000333333333333333333333333333333333333
          0000}
        NumGlyphs = 2
      end
    end
  end
  object BitBtn7: TBitBtn
    Left = 248
    Top = 464
    Width = 113
    Height = 25
    Caption = 'Salir'
    TabOrder = 2
    OnClick = BitBtn7Click
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
  object IBTransaction1: TIBTransaction
    Active = False
    DefaultDatabase = IBDatabase1
    Params.Strings = (
      'read_committed'
      'rec_version'
      'nowait')
    AutoStopAction = saNone
    Left = 888
    Top = 24
  end
  object IBDatabase1: TIBDatabase
    LoginPrompt = False
    IdleTimer = 0
    SQLDialect = 3
    TraceFlags = []
    Left = 848
    Top = 24
  end
  object IBQuery1: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 872
    Top = 88
  end
  object DataSource1: TDataSource
    DataSet = IBQuery2
    Left = 744
    Top = 64
  end
  object DataSource2: TDataSource
    DataSet = IBQuery3
    Left = 832
    Top = 160
  end
  object IBQuery2: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 144
  end
  object IBQuery3: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 200
    Top = 8
  end
end
