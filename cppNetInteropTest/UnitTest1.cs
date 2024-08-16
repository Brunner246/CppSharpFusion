using NUnit.Framework;

namespace cppNetInteropTest {
  public class Tests {
    [SetUp]
    public void Setup() {}

    [Test]
    public void TestGetMessage() {
      // Arrange
      var wrapper = new clrWrapper.BusinessLogicWrapper();

      // Act
      var message = wrapper.GetMessage();
      Console.WriteLine(message);

      // Assert
      Assert.IsNotNull(message);
      Assert.IsNotEmpty(message);
    }
  }
}
