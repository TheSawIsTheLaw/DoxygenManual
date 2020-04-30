/**
 * \file secretNumber.c
 * \brief Файл функции вывода секретного числа
 */
#include <stdio.h>

#include "defines.h"

/**
 * \fn int secretNumber(int password, FILE *outStream)
 *
 * \author TheSawIsTheLaw
 *
 * \param[in] int password
 *
 * \param[out] check - код удачного завершения или ошибки
 *
 * \brief Функция по секретному паролю по переданному адресу потока
 * передаёт секретное число
 *
 * \code
 * int check = FILE_ERROR;
 *
 * if (!outStream)
 *     return check;
 *
 * check = PASSWORD_ERROR;
 * if (password)
 *     return check;
 *
 * fprintf(outStream, "%d", SATAN);
 *
 * check = SUCCESS;
 * return check;
 * \endcode
 *
 * \return Код ошибки или удачного завершения
 */
int secretNumber(int password, FILE *outStream) {
    int check = FILE_ERROR;

    if (!outStream)
        return check;

    check = PASSWORD_ERROR;
    if (password)
        return check;

    fprintf(outStream, "%d", SATAN);

    check = SUCCESS;
    return check;
}
