/**
 * \file secretNumber.c
 * \brief Файл функции вывода секретного числа
 */
#include <stdio.h>

#include "defines.h"

/**
 * \fn int secretNumber(int password, FILE *outStream)
 *
 * \param[in] int password
 *
 * \param[out] FILE_ERROR     - поток вывода не доступен
 * \param[out] PASSWORD_ERROR - в функцию был передан неверный пароль
 *
 * \param[out] SUCCESS        - удачное завершение выполнения
 *
 * \brief Функция по секретному паролю по переданному адресу потока
 * передаёт секретное число
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
