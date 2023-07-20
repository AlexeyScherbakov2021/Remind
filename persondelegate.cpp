#include "persondelegate.h"

#include <QDate>

QString PersonDelegate::displayText(const QVariant &value, const QLocale &locale) const
{

    return value.toDate().toString("dd.MM.yyyy");
}
