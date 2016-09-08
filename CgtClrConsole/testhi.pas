unit hi;

interface

uses 
  Windows,
kol,Share;

type
  TClass = class
   public
    constructor Create;
    destructor Destroy; override;
  end;

var
  ClassMain:TClass;

implementation

constructor TClass.Create;
begin
  inherited;
  ClassMain := self;
 //%multi%
 //Make all connection in scheme
end;

destructor TClass.Destroy;
begin
  inherited;
end;

end.
