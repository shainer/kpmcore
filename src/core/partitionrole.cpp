/*************************************************************************
 *  Copyright (C) 2008 by Volker Lanz <vl@fidra.de>                      *
 *  Copyright (C) 2016 by Andrius Štikonas <andrius@stikonas.eu>         *
 *  Copyright (C) 2016 by Teo Mrnjavac <teo@kde.org>                     *
 *                                                                       *
 *  This program is free software; you can redistribute it and/or        *
 *  modify it under the terms of the GNU General Public License as       *
 *  published by the Free Software Foundation; either version 3 of       *
 *  the License, or (at your option) any later version.                  *
 *                                                                       *
 *  This program is distributed in the hope that it will be useful,      *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 *  GNU General Public License for more details.                         *
 *                                                                       *
 *  You should have received a copy of the GNU General Public License    *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.*
 *************************************************************************/

#include "core/partitionrole.h"

#include <QString>
#include <KLocalizedString>

/** @return the role as string */
QString PartitionRole::toString() const
{
    if (roles() & Unallocated)
        return xi18nc("@item partition role", "unallocated");

    if (roles() & Logical)
        return xi18nc("@item partition role", "logical");

    if (roles() & Extended)
        return xi18nc("@item partition role", "extended");

    if (roles() & Primary)
        return xi18nc("@item partition role", "primary");

    if (roles() & Luks)
        return xi18nc("@item partition role", "LUKS");

    return xi18nc("@item partition role", "none");
}
