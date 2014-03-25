<?hh

echo "<h1>Collections (Map)</h1>";
echo "<h3>Vectors, Maps, Sets, Pairs ...</h3>";
echo "<pre>";
echo htmlentities('function testCollection(): void {
	$map = Map {
		"Hello" => "World",
		"Foo" => 22,
		"Bar" => [1, 2, 3]
	};

	foreach ($map as $value) {
		echo "$value<br/>";
	}

	echo "<br/>";

	foreach ($map as $key => $value) {
		echo "$key => $value<br/>";
	}

	echo "<br/>";

	echo $map->contains("Hello") ? "Yes" : "No";
}

testCollection();
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

function testCollection(): void {
	$map = Map {
		"Hello" => "World",
		"Foo" => 22,
		"Bar" => [1, 2, 3]
	};

	foreach ($map as $value) {
		echo "$value<br/>";
	}

	echo "<br/>";

	foreach ($map as $key => $value) {
		echo "$key => $value<br/>";
	}

	echo "<br/>";

	echo $map->contains("Hello") ? "Yes" : "No";
}

testCollection();