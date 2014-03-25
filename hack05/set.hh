<?hh

echo "<h1>Collections (Set)</h1>";
echo "<h3>Vectors, Maps, Sets, Pairs ...</h3>";
echo "<pre>";
echo htmlentities('function testCollection(): void {
	$set = Set {
		1, 2, 3
	};

	$set->add(2);

	foreach ($set as $item) {
		echo "$item<br/>";
	}

	echo $set->contains("Hello") ? "Yes" : "No";
}

testCollection();
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

function testCollection(): void {
	$set = Set {
		1, 2, 3
	};

	$set->add(2);

	foreach ($set as $item) {
		echo "$item<br/>";
	}

	echo "<br/>";

	echo $set->contains("Hello") ? "Yes" : "No";
}

testCollection();