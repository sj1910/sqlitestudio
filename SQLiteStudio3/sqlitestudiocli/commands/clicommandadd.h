#ifndef CLICOMMANDADD_H
#define CLICOMMANDADD_H

#include "clicommand.h"

class CliCommandAdd : public CliCommand
{
        Q_OBJECT

    public:
        void execute();
        QString shortHelp() const;
        QString fullHelp() const;
        void defineSyntax();
};

#endif // CLICOMMANDADD_H
