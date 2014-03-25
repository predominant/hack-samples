<?hh
echo "<h1>Null Types</h1>";
echo "<pre>";
echo htmlentities('function squared(?int $x): bool {
	if ($x === null) {
		$x = 0;
	}

	return $x * $x;
}

echo squared(4) . "<br/>";
echo squared(null) . "<br/>";
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

function squared(?int $x): bool {
	if ($x === null) {
		$x = 0;
	}

	return $x * $x;
}

echo squared(4) . "<br/>";
echo squared(null) . "<br/>";

// Check Log for errors.
//echo squared("Hello") . "<br/>";
