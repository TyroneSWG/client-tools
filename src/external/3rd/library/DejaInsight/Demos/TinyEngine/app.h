//==============================================================================
//  app.h
//==============================================================================
//  Copyright (C) DejaTools, LLC.  All rights reserved.
//==============================================================================

#ifndef app_h
#define app_h

//==============================================================================
//  TYPES
//==============================================================================

class app
{
public:
                    app             ( void ) { };
virtual            ~app             ( void ) { };

virtual void        Init            ( void ) { };
virtual void        Kill            ( void ) { };
virtual void        Logic           ( float DeltaTime );
virtual void        Render          ( void );
};

//==============================================================================
#endif // app_h
//==============================================================================