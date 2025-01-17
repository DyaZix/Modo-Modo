// Static Game class that will update each frames 


class Game
{
private:
    static bool paused;

public:
    ////////////////////////////////////////////////////////////
    /// \brief game main function
    ///
    /// Initialise the main window and loops every frames 
    /// to update the game
    ///
    ////////////////////////////////////////////////////////////
    static void start();


    ////////////////////////////////////////////////////////////
    /// \brief pauses the game
    ///
    /// In the menus the game should always be paused
    ///
    ////////////////////////////////////////////////////////////
    static void pause();


    ////////////////////////////////////////////////////////////
    /// \brief resumes the game
    ///
    /// In the menus the game should always be paused, else the game should be running
    ///
    ////////////////////////////////////////////////////////////
    static void resume();
};


