// filename -- mine.h
// This file contains the definition for the Fan class
// header files
#ifndef CLASS_MINE
#define CLASS_MINE
class MineLocator
{
   private:
      char *storage;    // holding information about the game
      int rows;         // number of rows
      int columns;      // number of columns

   public:
      MineLocator(int rows = 10, int columns = 10);
      MineLocator(const MineLocator&);
      ~MineLocator();

      void setElement(int, int, char);
      char getElement(int, int);
      void initializeGame();
      int getRows();
      int getColumns();
      // class MineLocator
};
#endif
