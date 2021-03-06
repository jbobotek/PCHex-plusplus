#ifndef GUI_H
#define GUI_H

#include <string>

void initializationError(const int err);
void ciaConsole(int& game, int& mediatype);
void inputHandler();
void drawTopScreen();
void drawBottomScreen();

void loadingScreen();
void closeEov();
void callKeyboard();
void changeBox(const int val);
void selectClone();
void clone();
void multipleSelectClone();
void multipleClone();
void selectImport();
void import();
void search();
void selectNature();
void editNature();
void commitSave();
void exprt();
void selectAbility();
void editAbility();
void selectItem();
void editItem();
void selectBall();
void editBall();
void setShiny();
void setGender();
void selectSpecies();
void editSpecies();
void startEdit();
void cancelEdit();
void selectMove(const int val);
void editMove();
void editEggMove();
void enableMultiple();
void selectHiddenPower();
void editHiddenPower();
void multipleExport();
size_t uiLevenshteinDistance(const std::string &s1, const std::string &s2);

#endif /* GUI_H */

