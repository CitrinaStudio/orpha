package orphadb;


class TablePlayer {
    public function new(pName, pAge, pClass, pHp, pMp, pStr, pDex, pCon, pInt, pWis, pCha){
        
        this.pName = pName; this.pAge =  pAge; this.pHp =  pHp; this.pMp = pMp; this.pStr = pStr; 

        this.pDex = pDex; this.pCon = pCon; this.pInt = pInt; this.pWis -pWis; this.pCha = pCha;


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


class TableEnemy {
    public function new(pName, pAge, pClass, pHp, pMp, pStr, pDex, pCon, pInt, pWis, pCha){
        
        this.pName = pName; this.pAge =  pAge; this.pHp =  pHp; this.pMp = pMp; this.pStr = pStr; 

        this.pDex = pDex; this.pCon = pCon; this.pInt = pInt; this.pWis -pWis; this.pCha = pCha;


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
