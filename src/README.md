# Напутствие

Перед использованием следует установить на свою машину Doxygen.

```
pacman -S doxygen
```

Несложно, правда?

Перейдём к самому интересному. Из данной папки достаточно теперь прописать заветное:

```
doxygen Doxyfile
```

И, вуаля, генерируем документацию.

Чтобы посмотреть, что же получилось, достаточно открыть один из html файлов в браузере и потыкать кнопки.

Начнём с азов.

## Doxyfile

Это файл конфига генерации. В нём прописаны пути лого, имя проекта, точки поиска файлов, содержащие в себе док-строки и прочее. Файл достаточно большой, и в нём можно найти много интересного. Одна из таких интересностей - генерация man. Но всё это относится к личным интересам каждого, потому опустим детальное рассмотрение всего и всея в данном файле.



Заметьте, что мы можем подключать и выключать генерацию определённых элементов. Это полезно. Вы могли заметить множество мусорных файлов (например, man и sqlite), этого всё, конечно, стоило бы убрать, но свою лень я прикрою желанием показать Вам некоторые возможности Doxygen.

## Документация кода

Самое главное для нас - документация функций.

Для документации функций в нашем арсенале имеется множется команд для генератора, полный список которых и их применение Вы можете узреть [тут](http://www.doxygen.nl/manual/commands.html).

В примере используются следующие команды:

### \file название_файла

Команда, находящаяся в начале каждого обрабатываемого генератором файла.

Да, имя файла тут и в действительности должен совпадать, иначе чуда не произойдёт.

### \brief описание

Команда, дающее краткое описание того или иного "объекта". На странице так отображаться и будет. Работает как для функции, так и для файла в целом.

### \fn название_функции (полное, с параметрами)

Точка начала описания функции, тут добавить нечего.

### \param[in\out] имя_параметра - описание

Описание параметров функции. Для каждого параметра - отдельное объявление (см. пример функции secretNumber)

Удобно использовать в конце данной команды [in] или [out], так как читаемость документации вырастает в разы. Наверное, я не знаю, её никто не читает чаще всего...

### \code ... \endcode

Вместо троеточия можем вставить часть кода функции или всю функцию, чтобы добавить его на страницу файла. Удобно? Удобно. Но лучше скрыть некоторые части функции, чтобы никто не устраивал внеплановый код ревью.

### \return описание

Описание смысла возвращаемого значения.

### \author имя_автора

Самая ненужная команда из всех.


