#include <QApplication>
#include "googledocs_search.h"
#include "clickable_lineedit.h"
//#include "left_menu_bar.h"




int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

   GoogleDocsSearch googleDocsSearch;
    googleDocsSearch.show();

/*    LeftMenuBar mainWindow;

    // Additional setup if needed

    // Show the main window
    mainWindow.show();*/

    return app.exec();
}

