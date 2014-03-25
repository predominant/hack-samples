<?hh

echo "<h1>Shapes (Generics)</h1>";
echo "<pre>";
echo htmlentities('type MyData<T> = shape(\'first\' => T, \'second\' => T);

function inspect(MyData<T> $data) {
	var_dump($data);
}

inspect(shape(\'first\' => \'Hello\', \'second\' => \'World\'));
inspect(shape(\'first\' => 2, \'second\' => 4));
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

type MyData<T> = shape('first' => T, 'second' => T);

function inspect(MyData<T> $data) {
	var_dump($data);
}

inspect(shape('first' => 'Hello', 'second' => 'World'));
echo "<br/>";
inspect(shape('first' => 2, 'second' => 4));
echo "<br/>";
