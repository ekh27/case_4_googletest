# Кейс-задача № 4: интерфейсы и unit-тесты GoogleTest

Проект подготовлен для производственной практики. Он содержит контракты трёх структур данных и набор unit-тестов GoogleTest:

- `Queue` — очередь FIFO с `push` и `pop`;
- `Heap` — max-heap с `push` и `pop`;
- `BinaryTree` — бинарное дерево поиска с `push`, `pop` и `search`; метод
  `pop` возвращает и удаляет минимальный элемент.

Согласно формулировке задания, реализации процедур намеренно отсутствуют: содержимое папки `include` задаёт только интерфейс. Файл `tests/structures_test.cpp` фиксирует ожидаемое поведение будущих реализаций.

## Как запустить тесты после реализации методов

Нужны CMake (3.20 или новее), компилятор C++17 и доступ к GitHub для загрузки GoogleTest.

```powershell
cmake -S . -B build -DBUILD_CONTRACT_TESTS=ON
cmake --build build
ctest --test-dir build --output-on-failure
```

