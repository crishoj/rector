<?php

namespace Rector\Php70\Tests\Rector\List_\ListSwapArrayOrderRector\Fixture;

class SkipEmpty
{
    public function b()
    {
        list(, $b[]) = [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Php70\Tests\Rector\List_\ListSwapArrayOrderRector\Fixture;

class SkipEmpty
{
    public function b()
    {
        list(, $b[]) = array_reverse([1, 2]);
    }
}

?>
