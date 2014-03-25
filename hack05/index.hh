<?hh

echo "<h1>Collections (Vector)</h1>";
echo "<h3>Vectors, Maps, Sets, Pairs ...</h3>";
echo "<pre>";
echo htmlentities('function testCollection(): void {
	$vec = Vector {
		1, 2, 3, 4, 5
	};

	foreach ($vec as $item) {
		echo "$item<br/>";
	}
}

testCollection();
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

function testCollection(): void {
	$vec = Vector {
		1, 2, 3, 4, 5
	};

	$vec->add("Hello");
	$vec->add(12);

	foreach ($vec as $item) {
		echo "$item<br/>";
	}
}

testCollection();