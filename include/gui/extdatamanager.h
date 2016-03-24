#ifndef EXTDATAMANAGER_H
#define EXTDATAMANAGER_H

#include <vector>
#include <string>

#include "savefile.h"

class ExtDataManager {
    private:
        static std::vector<std::string> guitext;
        static std::vector<std::string> species;
        static std::vector<std::string> natures;
        static std::vector<u8> leveldata;
        static Savefile* saveptr;
        
    public:
        static const unsigned int ENGLISH = 1;
        
        static const int LVSTRING = 0;
        static const int BOXSTRING = 1;
        static const int EDITSTRING = 2;
        static const int IMPORTSTRING = 3;
        static const int CLONESTRING = 4;
        static const int CANCELSTRING = 5;
        static const int CHOOSESTRING = 6;
        static const int SELECTCLONINGSTRING = 7;
        static const int SUCCESSSSTRING = 8;
        static const int FAILEDSTRING = 9;
        static const int MULTIPLESELECTSTRING = 10;
        static const int SELECTPK6STRING = 11;
        static const int NOCONTENTSTRING = 12;
        static const int PREVSTRING = 13;
        static const int NEXTSTRING = 14;
        static const int SEARCHSTRING = 15;
        static const int SPECIESSTRING = 16;
        static const int NATURESTRING = 17;
        static const int SELECTNATURESTRING = 18;
        static const int SAVESTRING = 19;
        static const int EXPORTSTRING = 20;
        
        static std::string getBasePath();
        static int initialize(Savefile* save);
        static std::string getGuiText(const int msg) { return guitext[msg]; }
        static u8 getLevelType(const int val) { return leveldata[val]; }
        static std::string getSpeciesName(const int val) { return species[val]; }
        static std::vector<std::string> getSpeciesNameVector() { return species; }
        static std::string getNatureName(const int val) { return natures[val]; }
        static std::vector<std::string> getNaturesNameVector() { return natures; }
        static Savefile* getSave() { return saveptr; }
};

#endif /* EXTDATAMANAGER_H */

