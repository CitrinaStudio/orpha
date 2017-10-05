package orphadb;


class TablePlayer {
    public function new(player_params){

        this.pName = player_params.pName; this.pAge = player_params.pAge; this.pHp = player_params.pHp; this.pMp = player_params.pMp; this.pStr = player_params.pStr;

        this.pDex = player_params.pDex; this.pCon = player_params.pCon; this.pInt = player_params.pInt; this.pWis = player_params.pWis; this.pCha = player_params.pCha;


    };
    public var pName:String;
    public var pAge:Int;
    public var pClass:String;
    public var pHp:Int;
    public var pMp:Int;
    public var pStr:Int;
    public var pDex:Int;
    public var pCon:Int;
    public var pInt:Int;
    public var pWis:Int;
    public var pCha:Int;
}
