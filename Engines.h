/*--------------------------------------------------------------------\
| DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE                         |
| Version 2, December 2004                                            |
|                                                                     |
| Copyright (C) 2013 Kévin Seroux <kevin.seroux@orange.fr>            |
|                    Jéremy Robert <yro44@orange.fr>                  |
|                    Tristan Lebreton <lebreton-tristan@orange.fr>    |
|                                                                     |
| Everyone is permitted to copy and distribute verbatim or modified   |
| copies of this license document, and changing it is allowed as long |
| as the name is changed.                                             |
|                                                                     |
| DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE                         |
| TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION     |
|                                                                     |
| 0. You just DO WHAT THE FUCK YOU WANT TO.                           |
\-------------------------------------------------------------------*/

#ifndef ENGINES_H
#define ENGINES_H

class Engines
{
  public:
    /* inline */ void setSpeedsEngines(const char leftEngine, const char rightEngine);
    /* inline */ void setSpeedLeftEngine(const char leftEngine);
    /* inline */ void setSpeedRightEngine(const char rightEngine);
  private:
    char _speedLeftEngine;
    char _speedRightEngine;
};

#endif
