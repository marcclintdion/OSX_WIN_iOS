
#include <cmath>
#include <cstring>
#include <limits>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


bool runOnceForThisModel = true;


int main(int argc, char* argv[])
{


/*
std::string passFilename;

if(argv[1] != NULL)
{
     passFilename = argv[1];


//========================================================================================================

ifstream inModelIsWritten("modelIsWritten.c");

    std::string s0, line0;
    while(getline(inModelIsWritten, line0))
    {
          s0 += line0;
    }
    if(s0 == passFilename)
    {
         runOnceForThisModel = false;
    }
*/
//========================================================================================================

//if(runOnceForThisModel)
//{
                         
    //========================================================================================================
    //####################____GLOBALS____#####################################################################
    //####################____GLOBALS____#####################################################################
    //####################____GLOBALS____#####################################################################
    //========================================================================================================                         
    //--------------------------------------------------------------------------------------------------------
    //========================================================================================================
    //============_READ_GLOBALS_==============================================================================
    //========================================================================================================   
    ifstream inGLOBALS("../GLOBALS.cpp");
    string s1, line1;
    while(getline(inGLOBALS, line1))
    {
          s1 += line1 + "\n";
    }
    //========================================================================================================
    //============_BACKUP_GLOBALS_============================================================================
    //========================================================================================================  
    ofstream outGlobals_backUp("../backUp/GLOBALS.cpp");
    outGlobals_backUp << s1 << "";
    //========================================================================================================
    //============_READ_GLOBAL_STRINGS_==============================================================================
    //========================================================================================================       
    ifstream inGLOBALS_STRINGS("GLOBALS_STRINGS.cpp");
    string gs1, gline1;
    while(getline(inGLOBALS_STRINGS, gline1))
    {
          gs1 += gline1 + "\n";
    }
    //========================================================================================================
    //============_WRITE_GLOBALS_=============================================================================
    //========================================================================================================  
    ofstream outGlobals("../GLOBALS.cpp");
    outGlobals << s1 << "\n";
    outGlobals << gs1 << "\n";
    //========================================================================================================
    //============_DELETE_GLOBALS_STRINGS_==========================================================================
    //========================================================================================================  
    ofstream outDELETE_GLOBALS_STRINGS("GLOBALS_STRINGS.cpp");
    outDELETE_GLOBALS_STRINGS << "";
    //========================================================================================================
    //####################____INIT____########################################################################
    //####################____INIT____########################################################################
    //####################____INIT____########################################################################
    //========================================================================================================                         
    //--------------------------------------------------------------------------------------------------------
    //========================================================================================================   
    //============_READ_INIT_=================================================================================
    //========================================================================================================   
    ifstream inINITIALIZE("../INITIALIZE.cpp");
    string s2, line2;
    while(getline(inINITIALIZE, line2))
    {
          s2 += line2 + "\n";
    }  
    //========================================================================================================
    //============_BACKUP_INITIALIZE_============================================================================
    //========================================================================================================  
    ofstream outINITIALIZE_backUp("../backUp/INITIALIZE.cpp");
    outINITIALIZE_backUp << s2 << "";
    //========================================================================================================
    //============_READ_INITIALIZE_STRINGS_===================================================================
    //========================================================================================================       
    ifstream inINITIALIZE_STRINGS("INITIALIZE_STRINGS.cpp");
    string gs2, gline2;
    while(getline(inINITIALIZE_STRINGS, gline2))
    {
          gs2 += gline2 + "\n";
    }
    //========================================================================================================
    //============_WRITE_INITIALIZE_==========================================================================
    //========================================================================================================  
    ofstream outINITIALIZE("../INITIALIZE.cpp");
    outINITIALIZE << s2 << "\n";
    outINITIALIZE << gs2 << "\n";
    //========================================================================================================
    //============_DELETE_INITIALIZE_STRINGS_==========================================================================
    //========================================================================================================  
    ofstream outDELETE_INITIALIZE_STRINGS("INITIALIZE_STRINGS.cpp");
    outDELETE_INITIALIZE_STRINGS << "";
    //####################____runDepth_FBO____################################################################
    //####################____runDepth_FBO____################################################################
    //####################____runDepth_FBO____################################################################
    //========================================================================================================                         
    //--------------------------------------------------------------------------------------------------------
    //========================================================================================================   
    //============_READ_runDepth_=========================================================================
    //========================================================================================================   
    ifstream inrunDepth("../runDepth.cpp");
    string s3, line3;
    while(getline(inrunDepth, line3))
    {
          s3 += line3 + "\n";
    } 
    //========================================================================================================
    //============_BACKUP_runDepth_=======================================================================
    //========================================================================================================  
    ofstream outrunDepth_backUp("../backUp/runDepth.cpp");
    outrunDepth_backUp << s3 << "";
    //========================================================================================================
    //============_READ_runDepth_STRINGS_=================================================================
    //========================================================================================================       
    ifstream inrunDepth_STRINGS("runDepth_STRINGS.cpp");
    string gs3, gline3;
    while(getline(inrunDepth_STRINGS, gline3))
    {
          gs3 += gline3 + "\n";
    }
    //========================================================================================================
    //============_WRITE_runDepth_========================================================================
    //========================================================================================================  
    ofstream outrunDepth("../runDepth.cpp");
    outrunDepth << s3 << "\n";
    outrunDepth << gs3 << "\n";
    //========================================================================================================
    //============_DELETE_runDepth_STRINGS_==========================================================================
    //========================================================================================================  
    ofstream outDELETE_runDepth_STRINGS("runDepth_STRINGS.cpp");
    outDELETE_runDepth_STRINGS << "";
    //========================================================================================================
    //####################____drawMainColor_FBO____###########################################################
    //####################____drawMainColor_FBO____###########################################################
    //####################____drawMainColor_FBO____###########################################################
    //========================================================================================================                         
    //--------------------------------------------------------------------------------------------------------
    //========================================================================================================   
    //============_READ_drawMainColor_====================================================================
    //========================================================================================================   
    ifstream indrawMainColor("../drawMainColor.cpp");
    string s4, line4;
    while(getline(indrawMainColor, line4))
    {
          s4 += line4 + "\n";
    } 
    //========================================================================================================
    //============_BACKUP_drawMainColor_==================================================================
    //========================================================================================================  
    ofstream outdrawMainColor_backUp("../backUp/drawMainColor.cpp");
    outdrawMainColor_backUp << s4 << "";
    //========================================================================================================
    //============_READ_drawMainColor_STRINGS_============================================================
    //========================================================================================================       
    ifstream indrawMainColor_STRINGS("drawMainColor_STRINGS.cpp");
    string gs4, gline4;
    while(getline(indrawMainColor_STRINGS, gline4))
    {
          gs4 += gline4 + "\n";
    }
    //========================================================================================================
    //============_WRITE_drawMainColor_===================================================================
    //========================================================================================================  
    ofstream outdrawMainColor("../drawMainColor.cpp");
    outdrawMainColor << s4 << "\n";
    outdrawMainColor << gs4 << "\n"; 
    //========================================================================================================
    //============_DELETE_drawMainColor_STRINGS_==========================================================================
    //========================================================================================================  
    ofstream outDELETE_drawMainColor_STRINGS("drawMainColor_STRINGS.cpp");
    outDELETE_drawMainColor_STRINGS << "";
    //========================================================================================================
    //####################____SHUTDOWN____###########################################################
    //####################____SHUTDOWN____###########################################################
    //####################____SHUTDOWN____###########################################################
    //========================================================================================================                         
    //--------------------------------------------------------------------------------------------------------
    //========================================================================================================   
    //============_READ_SHUTDOWN_====================================================================
    //========================================================================================================   
    ifstream inSHUTDOWN("../SHUTDOWN.cpp");
    string s5, line5;
    while(getline(inSHUTDOWN, line5))
    {
          s5 += line5 + "\n";
    } 
    //========================================================================================================
    //============_BACKUP_SHUTDOWN_==================================================================
    //========================================================================================================  
    ofstream outSHUTDOWN_backUp("../backUp/SHUTDOWN.cpp");
    outSHUTDOWN_backUp << s5 << "";
    //========================================================================================================
    //============_READ_SHUTDOWN_STRINGS_============================================================
    //========================================================================================================       
    ifstream inSHUTDOWN_STRINGS("SHUTDOWN_STRINGS.cpp");
    string gs5, gline5;
    while(getline(inSHUTDOWN_STRINGS, gline5))
    {
          gs5 += gline5 + "\n";
    }
    //========================================================================================================
    //============_WRITE_SHUTDOWN_===================================================================
    //========================================================================================================  
    ofstream outSHUTDOWN("../SHUTDOWN.cpp");
    outSHUTDOWN << s5 << "\n";
    outSHUTDOWN << gs5 << "\n"; 
    //========================================================================================================
    //============_DELETE_SHUTDOWN_STRINGS_==========================================================================
    //========================================================================================================  
    ofstream outDELETE_SHUTDOWN_STRINGS("SHUTDOWN_STRINGS.cpp");
    outDELETE_SHUTDOWN_STRINGS << "";
    
    
    
    

//}//if(runOnceForThisModel)


//}//_END--> if(argv[1] != NULL)

//==============================================================================

}



















